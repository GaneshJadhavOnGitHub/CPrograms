/*
Write a program which accept number from user and return the count of even digits.
Input : 2395
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
*/
#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- CountEven
 Input         :- Integer
 Output        :- Integer
 Description   :- It returns count of even digits in the given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 6-March-2021
*/
//Time complexity O(N)=x when x digit number is given as input to function.
int CountEven(int iNo)
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
	 if((iDigit%2)==0)    //Digit is even
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
 iRet=CountEven(iValue);
 printf("Count of even digits in above number is :- %d",iRet);
 return 0;
}