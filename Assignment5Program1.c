/*
Write a program which accept number from user and display its multiplication of
factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
*/

#include<stdio.h>

/*
Function Name:- MultFact
Input        :- Integer
Output       :- Integer
Description  :- It calculates the multiplication of factors of input number.
                Number itself is not considered as factor to reduce time complexity by half.
Author Name  :- Ganesh Kamalakar Jadhav
Date         :- 6-March-2021
*/
//Time complexity O(N)= N/2 where N is input number.

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
  for(iCnt=1;iCnt<=iNo/2;iCnt++)
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