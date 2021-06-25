/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : StringCopyN
Input         : Character Pointer, Character Pointer , Integer
Output        : void
Description   : It copies the given number of charcters of source string into destination string.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/


void StringCopyN(char *src, char* dest, int iNo)
{
 int iCnt=0;
 for (iCnt=0;iCnt<iNo;iCnt++)
 {
  *dest=*src;
  src++;
  dest++;
 }
}

int main()
{
 char Arr[30];
 char Brr[30];
 int iNo=0;
 system("cls");
 printf("Enter a String:\n");
 scanf("%[^'\n']s",Arr);
 printf("Enter number of characters to be copied:\n");
 scanf("%d",&iNo);
 StringCopyN(Arr,Brr,iNo);
 printf("New String is : %s",Brr);
 return 0;
}