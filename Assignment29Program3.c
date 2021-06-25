/*
 Write a program which accept one number and position from user and ON
that bit. Return modified number.
Input : 10 3
Output : 14
*/
#include<stdio.h>
/*
Function Name : OnBit
Input         : Unsigned int, Integer
Output        : Unsigned int
Description   : It ON bit at given position of given number if it is OFF and returns modified number.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
//Program 115.
unsigned int OnBit(unsigned int iNo, int iPos)
{
 unsigned int iMask=0x00000001;
 unsigned int iResult=0;
 if ((iPos<1)||(iPos>32))
  {
   return -1;
  }
 iMask = iMask <<(iPos-1);
 iResult=iNo | iMask;
 return iResult;
}

int main()
{
 unsigned int iValue=0;
 int iPosition=0;
 int iRet=0;
 printf("Enter  number :- \n");
 scanf("%u",&iValue);
 printf("Enter position:- \n");
 scanf("%d",&iPosition);
 iRet=OnBit(iValue,iPosition);
 printf("Number after updation is %d",iRet);
 return 0;
}