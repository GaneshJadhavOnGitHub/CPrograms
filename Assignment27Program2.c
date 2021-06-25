/*
Write a program which checks whether 5th & 18th bit is On or OFF.
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
Function Name : CheckFifthEighteenthBit
Input         : Unsigned int
Output        : Boolean
Description   : It checks whether 5th & 18th bit is ON or OFF. Returns true if both bits are ON
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
 0000 0000 0000 0010 0000 0000 0001 0001  iNo      0x00020011
 0000 0000 0000 0010 0000 0000 0001 0000  iMask    0x00020010 &
 ________________________________________________________________
 0000 0000 0000 0010 0000 0000 0001 0000  iResult
 We will perform ANDing of iNo & iMask 
 if iResult==iMask bits are ON
 */
bool CheckFifthEighteenthBit(unsigned int iNo)
{
 unsigned int iMask=0x00020010;
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
unsigned int iValue=0;
bool bRet=0;
printf("Enter a number:\n");
scanf("%u",&iValue);
bRet=CheckFifthEighteenthBit(iValue);
if (bRet==true)
{
 printf("Bits are ON");
}
else
{
 printf("Bits are OFF");
}
return 0;
}
