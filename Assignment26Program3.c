/*
Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : CopyCapital
Input         : Character Pointer, Character Pointer
Output        : void
Description   : It copies the CAPITAL characters of source string into destination string.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/
void CopyCapital(char *src, char *dest)
{
 if (src==NULL)
 {
  return;
 }
 while (*src!='\0')
 {
  if ((*src>='A')&&(*src<='Z'))
  {
    *dest=*src;
	 dest++;
  }
  src++;
 }
}

int main()
{
 system("cls");
 char Arr[30];
 char Brr[30];
 printf("Enter String:\n");
 scanf("%[^'\n']s",Arr);
 CopyCapital(Arr,Brr);
 printf("String of CAPITAL characters is :- %s",Brr);
 return 0;
}