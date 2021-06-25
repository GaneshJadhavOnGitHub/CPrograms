/*
Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
Input : 137
Output : 201
*/
#include<stdio.h>
/*
Function Name : ToggleSeventhBit
Input         : Unsigned int
Output        : Unsigned int
Description   : It Toggle 7th bit of given number and returns modified number.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
0000 0000 0000 0000 0000 0000 0100 0001   iNo       0x00000041
0000 0000 0000 0000 0000 0000 0100 0000   iMask     0x00000040 ^
_______________________________________________________________
0000 0000 0000 0000 0000 0000 0000 0001   iResult   0x00000001 
We will take a number with 7th bit ON.
Mask has 7th bit ON and remianing bits OFF
And do ^ operation between Number and Mask.

*/
unsigned int ToggleSeventhBit(unsigned int iNo)
{
 unsigned int iMask=0x00000040;
 unsigned int iResult=0;
 iResult = iNo ^ iMask;
 return iResult;
}
int main()
{
unsigned int iValue=0;
unsigned int iRet=0;
printf("Enter a number:\n");
scanf("%u",&iValue);
iRet=ToggleSeventhBit(iValue);
printf("Number after updation is %u",iRet);
return 0;
}