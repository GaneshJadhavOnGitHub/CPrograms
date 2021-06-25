/*
Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3
*/

#include<stdio.h>
/*
 Function Name :- CountTwo
 Input         :- Integer
 Output        :- Integer
 Description   :- It counts frequency of two in the given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 6-March-2021
*/
//Time complexity O(N)=x when x digit number is given as input to function.
int CountTwo(int iNo)
{
   int iDigit=0;// Variable to hold digits in the given number.
   int iCnt=0; //Variable to count number of 2's in the given number.
   if (iNo<0) //Input corrector
   {
    iNo=-iNo;
   }
   while (iNo>0)
   {
     iDigit=iNo%10;   //Extract digit from number
	 if(iDigit==2)    //Digit is 2
	   { 
	     iCnt++;      //Increment counter.
	   }
     iNo=iNo/10;      //Separate digit from number.
   }
   return iCnt;
}

int main()
{
 int iValue=0;
 int iRet=0;
 printf("Enter a number: ");
 scanf("%d", &iValue);
 iRet=CountTwo(iValue);
 printf("2 appeared %d times in given number",iRet);
 return 0;
}