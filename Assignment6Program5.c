/*
Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1
*/

#include<stdio.h>
#include<stdlib.h>

/*
 Function Name:- Count
 Input :- Integer
 Output:- Integer
 Description :- It calculates the frequency of such digits in given number which are less than 6.
 Author Name :- Ganesh Kamalakar Jadhav.
 Date :- 6-March-2021
*/
//Time complexity O(N)=x when x digit number is given as input to function.
int Count(int iNo)
{
  int iDigit=0; //Variable to hold digit
  int iCnt=0;   //Variable to hold count of digits which are less than 6.
  if (iNo<0)    //Input corrector
  {
   iNo=-iNo;
  }
  while (iNo!=0)
  {
    iDigit=iNo%10; //Extract digit from number
	if (iDigit<6)  //If digit is less than 6
	{
	  iCnt++;
	}
	iNo=iNo/10;   //Separate digit from given number
  }
  return iCnt;
}

int main()
{
 int iValue=0;
 int iRet=0;
 system("cls");
 printf("Enter number:- ");
 scanf("%d",&iValue);
 iRet=Count(iValue);
 printf("Frequency of digits which are less than 6 is %d\n",iRet);
 return 0;

}