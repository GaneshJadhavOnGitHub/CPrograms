/*
 Write a program which checks whether 7th & 15th & 21st and 28th bit
is On or OFF.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
Function Name : CheckBit
Input         : Unsigned int
Output        : Boolean
Description   : It checks whether 7th , 15th, 21st and 28th bit is ON or OFF. Returns true if all bits are ON
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
0000 1000 0001 0000 0100 0000 0100 0001   iNo     0x08104041
0000 1000 0001 0000 0100 0000 0100 0000   iMask   0x08104040 &
_______________________________________________________________
0000 1000 0001 0000 0100 0000 0100 0000   iResult 0x08104040
We will perform ANDing of iNo & iMask
if (iResult==iMask) return true.
*/
bool CheckBit(unsigned int iNo)
{
 unsigned int iMask=0x08104040;
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
bRet=CheckBit(iValue);
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

