//Write a program which accepts a number from user 
//and display its multiplication of factors.

//Input  :- 6
//Output :- 36  (1*2*3*6)
#include<stdio.h>

/*
Function Name:- MultFact
Input        :- Integer
Output       :- Integer
Description  :- It calculates the multiplication of all factors of input number.
Author Name  :- Ganesh Kamalakar Jadhav
Date         :- 1-March-2021
*/
int MultFact (int iNo)
{
  int iCnt=0;
  int iMultiplicationOfFactors=1;
   
  if(iNo<0) //Input corrector If input number is negative make it positive.
  {
    iNo=-iNo;
  }
   if(iNo==0) // If input number is zero.
  {
    return 0; //Return 0.
  }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if((iNo%iCnt)==0) //If number is completely divisible.
	{
	  iMultiplicationOfFactors=iMultiplicationOfFactors*iCnt; //Calculate multiplication of all factors.
	}
  }
  return iMultiplicationOfFactors;
}

int main()
{
 int iValue =0;
 int iRet=0;
 printf("Enter number:-");
 scanf("%d",&iValue);
 iRet=MultFact(iValue);
 printf("Multiplication of all factors of given number is %d",iRet);
 return 0;
}