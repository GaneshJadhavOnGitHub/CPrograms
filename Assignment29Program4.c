/*
 Write a program which accept one number and position from user and Toggle
that bit. Return modified number.
Input : 10 3
Output : 14
*/
#include<stdio.h>
/*
Function Name : ToggleBit
Input         : Unsigned int, Integer
Output        : Unsigned int
Description   : It Toggle bit at given position of given number and returns modified number.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
//Program 113.
unsigned int ToggleBit(unsigned int iNo, int iPos)
{
 unsigned int iMask=0x00000001;
 unsigned int iResult=0;
 if ((iPos<1)||(iPos>32))
  {
   return -1;
  }
 iMask = iMask <<(iPos-1);
 iResult=iNo ^ iMask;
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
 iRet=ToggleBit(iValue,iPosition);
 printf("Number after updation is %d",iRet);
 return 0;
}