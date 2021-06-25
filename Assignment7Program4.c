/*
Write a program which accept number from user and return multiplication of all digits.
Input : 2395
Output : 270
Input : 1018
Output : 0
Input : 9440
Output : 0
Input : 922432
Output : 864
*/
#include<stdio.h>
//#include<stdlib.h>

/*
 Function Name :- MultDigits
 Input         :- Integer
 Output        :- Integer
 Description   :- It returns multiplication of all digits in the given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 6-March-2021
*/
//Time complexity O(N)=x when x digit number is given as input to function.
int MultDigits(int iNo)
{
 int iDigit=0;  //Variable to hold digits
 int iMult=1;  //Variable to hold multiplication of all digits.
 if (iNo<0)   //Input corrector.
 {
   iNo=-iNo;
 }
 while (iNo!=0)        //Loop executes iNo number of times.
 {
   iDigit=iNo%10;      //Extract digit from number
   iMult=iMult*iDigit; //Perform multiplication of extracted digit.
   iNo=iNo/10;         //Separate number and digit.
 }
 return iMult;
}

int main()
{
 int iValue=0;
 int iRet=0;
 //system("cls"); //To clear screen.
 printf("Enter a number: ");
 scanf("%d", &iValue);
 iRet=MultDigits(iValue);
 printf("Multiplication of all digits in given number is :- %d",iRet);
 return 0;
}
