/*
Write a program which accept string from user and convert it into lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : ToLowerCase
Input         : Character Array
Output        : Void
Description   : It displays array in lower case.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

void ToLowerCase(char str[])
{
 char *s=NULL;
 char *p=NULL;
 int iLength=0;
 s=str;
 p=str;
 while (*s!='\0')
 {
  if ((*s>=65)&&(*s<=90))
  {
    printf("%c",*s+32);
  }
  else
  {
   printf("%c",*s);
  }
  s++;
  iLength++; 
 }
// str[iLength+1]='\0'; //At last iLength will contain length as last but one character of str 
 //So increment index of str by 1 and assign '\0' to it because in C every string ends with '\0'
 printf("\n");
 printf("%s",str);
 /*
 while (*p!='\0')
 {
  printf("%c",*p);
  p++;
 }
 */
}

int main()
{
system("cls");
char Arr[30];
char *s=NULL;
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
printf("String after conversion to lower case is as below\n");
ToLowerCase(Arr);
printf("\nEnd of Function ToLowerCase().\n");
s=Arr;
while(*s!='\0')
	{
      printf("%c",*s);
	  s++;
	}
return 0;
}