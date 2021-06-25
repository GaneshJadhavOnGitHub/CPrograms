/*
Write a program which checks whether 15th bit is On or OFF.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
Function Name : CheckFifteenthBit
Input         : Unsigned int
Output        : Boolean
Description   : It checks whether 15th bit is On or OFF.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
0000 0000 0000 0000 0100 0000 0000 0001     iNo
0000 0000 0000 0000 0100 0000 0000 0000     iMask &
_______________________________________________________
0000 0000 0000 0000 0100 0000 0000 0000     iResult
We need to perform ANDing of iNo and iMask
iMask in Hexadecimal is :  0x00004000
*/
bool CheckFifteenthBit(unsigned int iNo)
{
  unsigned int iMask=0x00004000;
  unsigned int iResult=0;
  iResult=iNo & iMask;
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
 system("cls");
 unsigned int iValue=0;
 bool bRet=false;
 printf("Enter a number:-");
 scanf("%u",&iValue);
 bRet=CheckFifteenthBit(iValue);
 if (bRet==true)
 {
  printf("Fifteenth bit in %u is ON",iValue);
 }
 else
 {
  printf("fifteenth bit in %u is OFF",iValue);
 }
 return 0;
}