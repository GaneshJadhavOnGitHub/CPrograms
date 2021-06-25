/*
Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)
*/
#include<stdio.h>
/*
Function Name : ToggleFirstLastNibble
Input         : Unsigned int
Output        : Unsigned int
Description   : It Toggle First and Last nibble of given number and returns modified number.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
1111 0000 0000 0000 0000 0010 0000 1111   iNo       0xF000020F
1111 0000 0000 0000 0000 0000 0000 1111   iMask     0xF000000F ^
_______________________________________________________________
0000 0000 0000 0000 0000 0010 0000 0000   iResult   0x00000200 
We will take a number First and Last Nibble ON.
Mask has bits of First and Last nibble ON and remianing bits OFF
And do ^ operation between Number and Mask.

*/
unsigned int ToggleFirstLastNibble(unsigned int iNo)
{
 unsigned int iMask=0xF000000F;
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
iRet=ToggleFirstLastNibble(iValue);
printf("Number after updation is %u",iRet);
return 0;
}