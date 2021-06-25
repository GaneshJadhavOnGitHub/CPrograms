/*
Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/

#include<stdio.h>
#include<stdbool.h>

/*
 Function Name :- DisplayDigit
 Input         :- Integer
 Output        :- Boolean
 Description   :- It checks whether given number contains 0 in it or not.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 6-March-2021
*/
//Time complexity O(N)=x when x digit number is given as input to function.
bool ChkZero(int iNo)
{
  int  iDigit=0; //Variable to hold digit.
  if (iNo<0) //Input corrector
  {
    iNo=-iNo;
  }
  while (iNo!=0)
  {
    iDigit=iNo%10; //Extract digit
	if (iDigit==0) //If digit is 0
	{
	  return true; //return true.
	}
    iNo=iNo/10; //Separate digit from number.
  }
}

int main()
{
  int iValue=0;
  bool bRet=false;

  printf("Enter a number:");
  scanf("%d",&iValue);
 
  bRet=ChkZero(iValue);
  
   if (bRet==true)
   {
     printf("Given number contains zero\n");
   }
   else
	{
     printf("Given number does not contain zero\n");
   }
  return 0;
}
