/*
Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>

/*
Function Name : CheckBit
Input         : Unsigned int, integer, integer
Output        : Bool
Description   : It checks whether bit at first or bit at second position is ON or OFF.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
bool CheckBit(unsigned int iNo, int iPos1, int iPos2)
{
  unsigned int iMask1=0x00000001; //Assumption
  unsigned int iMask2=0x00000001; //0000 0000 0000 0000 0000 0000 0000 0001
  unsigned int iMask=0x00000000; //Initialisation
  int iResult =0;
  if ((iPos1<1)||(iPos1>32)||(iPos2<1)||(iPos2>32))
  {
   return false;
  }
  iMask1=iMask1<<(iPos1-1);
  iMask2=iMask2<<(iPos2-1);
  iMask=iMask1|iMask2;
  iResult = iNo & iMask;
  if (iResult == iMask)
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
unsigned int iValue=0, iPos1=0, iPos2=0; 
bool bRet=false;
printf("Enter a number:\n");
scanf("%u",&iValue);
printf("Enter Position1:\n");
scanf("%u",&iPos1);
printf("Enter Position2:\n");
scanf("%u",&iPos2);

bRet=CheckBit(iValue, iPos1,iPos2);

if (bRet==true)
{
 printf("Bits are ON\n");
}
else
{
 printf("Bits are OFF\n");
}
return 0;
}