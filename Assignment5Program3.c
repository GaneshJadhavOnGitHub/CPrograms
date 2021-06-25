//Write a program which accepts a number from user 
//and display its non factors.

//Input  :- 10
//Output :- 3 4 6 7 8 9

#include<stdio.h>
#include<stdlib.h> //Header file to use system function "cls" to clear screen.

/*
Function Name :- NonFact
Input         :- Integer
Output        :- void
Description   :- It displays all the non factors of the given number.
Author Name   :- Ganesh Kamalakar Jadhav.
Date          :- 6-March-2021
*/
//Time complexity O(N)= N where N is input number.
void NonFact(int iNo) 
{
   int iCnt=0;

   if(iNo<0) //Input corrector , If input is negative.
   {
    iNo=-iNo; //Make input positive.
   }
   if ((iNo==0)||(iNo==1)||(iNo==2)) //Handle special cases of input 0,1 and 2.
   {
    printf("Don't have non factors\n");
   }

   for (iCnt=1;iCnt<=iNo;iCnt++)
   {
	   if((iNo%iCnt)!=0)//Reminder is non zero
	   {
		 printf("%d\t",iCnt);
	   }
   }
}

int main()
{
  int iValue=0;
  system("cls"); //To clear console.
  printf("Enter number:-");
  scanf("%d",&iValue);
  printf("Non Factors of entered number are as below\n");
  NonFact(iValue);
  return 0;

}