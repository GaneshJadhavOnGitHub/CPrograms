/*
 Write a program which checks whether 1st & 32nd bit
is On or OFF.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
Function Name : CheckBit
Input         : Unsigned int
Output        : Boolean
Description   : It checks whether checks whether 1st & 32nd bit is ON or OFF. Returns true if all bits are ON
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
1000 0000 0000 0000 0000 0000 0000 0011   iNo       0x80000003
1000 0000 0000 0000 0000 0000 0000 0001   iMask     0x80000001 &
_______________________________________________________________
1000 0000 0000 0000 0000 0000 0000 0001   iResult   0x80000001 &

We will perform ANDing of iNo & iMask
if (iResult==iMask) return true.
*/
bool CheckBit(unsigned int iNo)
{
 unsigned int iMask=0x80000001;
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

