/*
Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0
*/
#include<stdio.h>
#include<stdlib.h>

/*
 Function Name :- CountRange
 Input         :- Integer
 Output        :- Integer
 Description   :- It returns count of digits in between 3 and 7.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 6-March-2021
*/
//Time complexity O(N)=x when x digit number is given as input to function.
int CountRange(int iNo)
{
 int iDigit=0; //Variable to hold digit.
 int iCnt=0;   //Variable to hold Count of digits

 if (iNo<0)   //Input corrector
 {
   iNo=-iNo;
 }
 while (iNo>0)
 {
   iDigit=iNo%10; //Extract digit.
   if ((iDigit>3) && (iDigit<7)) //Digit is in between 3 and 7
   {
     iCnt++;  //Increment count.
   }
   iNo=iNo/10; //Separate number and digit. 
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
 iRet=CountRange(iValue);
 printf("Count of digits in between and 7 is :- %d",iRet);
 return 0;
}