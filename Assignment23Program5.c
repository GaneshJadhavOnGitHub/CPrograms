/*
Write a program which accept string from user and display it in reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : StringReverse
Input         : Character Array
Output        : Void
Description   : It displays the reverse of the given string.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

void StringReverse(char str[])
{
 char *s=NULL;
 int iCnt=0;
 s=str;
 while (*s!='\0')
 {
  iCnt++;
  s++;
 }
 while (iCnt>=0)
 {
  printf("%c",*s);
  iCnt--;
  s--;
 }
}

int main()
{
system("cls");
char Arr[30];
printf("\t\tProgram to reverse the given string\n");
printf("\t\t------------------------------------\n\n");
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
printf("Reverse of the given string is as below\n");
StringReverse(Arr);
return 0;
}

