/*
Write a program which accept string from user and copy small
characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi”
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : CopySmall
Input         : Character Pointer, Character Pointer
Output        : void
Description   : It copies the small characters of source string into destination string.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/

void CopySmall(char *src,char *dest)
{
	if (src==NULL)
	{
	 return;
	}
  while (*src!='\0')
  {
   if (((*src>=97)&&(*src<=122))||(*src==32))
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
 CopySmall(Arr,Brr);
 printf("String after copying small characters is-- %s",Brr);
 return 0;

}