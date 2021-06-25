/*
 Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : StringCopy
Input         : Character Pointer, Character Pointer
Output        : void
Description   : It copies the content of source string into destination string.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/

void StringCopy(char *src, char *dest)
{
 while (*src!='\0')
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
 system("cls");
 printf("Enter String:\n");
 scanf("%[^'\n']s",Arr);
 StringCopy(Arr,Brr);
 printf("Copied String is:-%s",Brr);
 return 0;
}