/*
Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79
*/

#include<stdio.h>
/*
Function Name : ONFirstFour
Input         : Unsigned int
Output        : Unsigned int
Description   : It ON first four bits of given number and returns modified number.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
0000 0000 0000 0000 0000 0000 0100 1001   iNo       0x00000049
0000 0000 0000 0000 0000 0000 0000 1111   iMask     0x0000000F |
_______________________________________________________________
0000 0000 0000 0000 0000 0000 0100 1111   iResult   0x0000004F 
We will take a number as 73 Convert it into binary.
Write a number with first four bits ON (1111) and remianing bits same as 73 This is our iResult(79)
Now from original number and iResult we will design Mask.
And do | (or) operation between Number and Mask.
*/
unsigned int ONFirstFour(unsigned int iNo)
{
 unsigned int iMask=0x0000000F;         
 unsigned int iResult=0;
 iResult=iNo | iMask;
 return iResult;
}

int main()
{
unsigned int iValue=0;
unsigned int iRet=0;
printf("Enter a number:\n");
scanf("%u",&iValue);
iRet=ONFirstFour(iValue);
printf("Updated number is :- %u",iRet);
return 0;
}