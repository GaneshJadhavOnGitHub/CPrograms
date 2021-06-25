/*
 Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TRUE
otherwise return FALSE.
Input : 10 2
Output : TRUE
*/

#include<stdio.h>
#include<stdbool.h>
/*
Function Name : CheckBit
Input         : Unsigned Integer , Integer
Output        : Boolean
Description   : It checks whether bit at given position is on or off
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
//Program112
bool CheckBit(unsigned int iNo, int iPos) 
{
 unsigned int iMask=0x00000001; //Take iMask as 1
 unsigned int iResult=0;
 if ((iPos<1)||(iPos>32))
 {
  return false;
 }
 iMask=iMask<<(iPos-1); //Left shift by iPos-1
 iResult=iNo&iMask;    //iNo & iMask
 if (iResult==iMask)
 {
  return true;
 }
 else
 {
  return false;
 }
}

int main()
{
 unsigned int iValue=0;
 int iPosition=0;
 bool bRet=false;
 printf("Enter  number :- \n");
 scanf("%u",&iValue);
 printf("Enter position:- \n");
 scanf("%d",&iPosition);
 bRet=CheckBit(iValue,iPosition);
 if (bRet==true)
 {
  printf("Bit at position %d in %u is ON\n",iPosition,iValue);
 }
 else
 {
  printf("Bit at position %d in %u is OFF\n",iPosition,iValue);
 }
 return 0;
}