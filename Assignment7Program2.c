/*
Write a program which accept number from user and return the count of odd digits.
Input : 2395
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0
*/
#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- CountOdd
 Input         :- Integer
 Output        :- Integer
 Description   :- It returns count of odd digits in the given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 6-March-2021
*/
//Time complexity O(N)=x when x digit number is given as input to function.
int CountOdd(int iNo)
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
	 if((iDigit%2)!=0)    //Digit is odd.
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
 system("cls"); //To clear screen.
 printf("Enter a number: ");
 scanf("%d", &iValue);
 iRet=CountOdd(iValue);
 printf("Count of odd digits in above number is :- %d",iRet);
 return 0;
}