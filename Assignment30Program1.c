/*
Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/
#include<stdio.h>
/*
Function Name : CountBit
Input         : Unsigned int
Output        : Unsigned int
Description   : It counts ON bits in the given number.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.

*/
unsigned int CountBit(unsigned int iNo)
{
  unsigned int iMask=0x00000001;// 1  0  1  0  0  1  0  1
                                // 0  0  0  0  0  0  0  1
								// 0  0  0  0  0  0  1  0
								// 0  0  0  0  0  1  0  0
unsigned int iResult=0;
int iCnt=0;
int i=0;

for (i=1;i<32 ;i++)
{
  iResult = iNo & iMask;
  if (iResult==iMask)
  {
   iCnt++;
  }
  iMask=iMask<<1;
}
 return iCnt;
}

int main()
{
unsigned int iValue=0;
int iRet=0;
printf("Enter a number:\n");
scanf("%u",&iValue);
iRet=CountBit(iValue);
printf("Total ON bits are :  %d",iRet);
return 0;
}