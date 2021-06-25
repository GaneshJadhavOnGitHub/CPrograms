/*
Write a program which accept string from user and convert it into lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/
/*
Note about program:- Arr[30] and str[] remains unchanged.
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
 s=str;
 while (*s!='\0')
 {
  if ((*s>=65)&&(*s<=90)) //If character is capital
  {
    printf("%c",*s+32); //Find that capital letter's lowercase and display.
  }
  else
  {
   printf("%c",*s); //else character is already in lowercase 
   //or contains special symbol or digit so print it as it is(No need to change)
  }
  s++;
 }
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
return 0;
}