/*
Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.
Input : 137
Output : 713
*/
#include<stdio.h>
/*
Function Name : ToggleSeventhTenthBit
Input         : Unsigned int
Output        : Unsigned int
Description   : It Toggle 7th and 10th bit of given number and returns modified number.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
0000 0000 0000 0000 0000 0010 0100 0001   iNo       0x00000241
0000 0000 0000 0000 0000 0010 0100 0000   iMask     0x00000240 ^
_______________________________________________________________
0000 0000 0000 0000 0000 0000 0000 0001   iResult   0x00000001 
We will take a number with 7th and 10th bit ON.
Mask has 7th and 10th bit ON and remianing bits OFF
And do ^ operation between Number and Mask.

*/
unsigned int ToggleSeventhTenthBit(unsigned int iNo)
{
 unsigned int iMask=0x00000240;
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
iRet=ToggleSeventhTenthBit(iValue);
printf("Number after updation is %u",iRet);
return 0;
}