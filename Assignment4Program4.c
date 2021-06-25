//Write a program which accepts a number from user 
//and display summation of all its non factors.

//Input  :- 10
//Output :- 37 (3+4+6+7+8+9)

#include<stdio.h>
#include<stdlib.h> //Header file to use system function "cls" to clear screen.

/*
 Function Name :- SumNonFact
 Input         :- Integer
 Output        :- Integer
 Description   :- It calculates the sum of all non factors of given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 1-March-2021
*/
int SumNonFact(int iNo)
{
  int iCnt=0;
  int iSummation=0; 
  if (iNo<=0) //Input corrector , If entered number is negative.
  {
   iNo=-iNo;
  }
  for (iCnt=1;iCnt<=iNo ;iCnt++ )
  {
	  if((iNo%iCnt)!=0) //If remainder is non zero then iCnt is non factor
	  {
	    iSummation=iSummation+iCnt;  //Do summation 
	  }
  }
  return iSummation;
}

int main()
{
 int iValue=0;
 int iRet=0;
 system("cls"); //Clear console.
 printf("Enter number:-");
 scanf("%d",&iValue);
 iRet=SumNonFact(iValue);
 printf("Summation of all non factors of given number is %d",iRet);
 return 0;
}