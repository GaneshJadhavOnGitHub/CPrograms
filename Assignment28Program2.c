/*
Write a program which accept one number from user and off 7th and 10th bit of that number if it is on. Return modified number.
Input : 577
Output : 1
*/

#include<stdio.h>
/*
Function Name : OffSeventhTenthBit
Input         : Unsigned int
Output        : Unsigned int
Description   : It OFF 7th and 10th bit of given number if it is on and returns modified number.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 04,2021.
*/
/*
0000 0000 0000 0000 0000 0010 0100 0001   iNo       0x00000241
1111 1111 1111 1111 1111 1101 1011 1111   iMask     0xFFFFFDBF &
_______________________________________________________________
0000 0000 0000 0000 0000 0000 0000 0001   iResult   0x00000001 
We will take a number with 7th and 10th bit ON.
Mask has 7th bit and 10th bit OFF and remianing bits ON
And do & operation between Number and Mask.
*/
unsigned int OffSeventhTenthBit(unsigned int iNo)
{
 unsigned int iMask=0xFFFFFDBF;         
 unsigned int iResult=0;
 iResult=iNo & iMask;
 return iResult;
}

int main()
{
unsigned int iValue=0;
unsigned int iRet=0;
printf("Enter a number:\n");
scanf("%u",&iValue);
iRet=OffSeventhTenthBit(iValue);
printf("Updated number is :- %u",iRet);
return 0;
}