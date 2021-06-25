/*
Write a program which accept string from user and convert it into lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/
/*
Note about program:-
src[] and Arr[30] both changed and both contains lowercase letters.
change in src[] is reflected in Arr[30] because both are at same memory location.
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : ToLowerCase
Input         : Character Pointer
Output        : Void
Description   : It displays string in lower case.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 02,2021
*/
void ToLowerCase(char *str)
{
 while (*str!='\0')
 {
  if ((*str>=65)&&(*str<=90))
  {
    *str=*str+32;
  }
  str++;
 }
}

int main()
{
system("cls");
char Arr[30];
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
printf("String after conversion to lower case is as below\n");
ToLowerCase(Arr);//ToLowerCase(Arr) means ToLowerCase(100) where 100 is address of Arr[30]. 
//Address of Arr is passed to function ToLowerCase().
printf("%s",Arr); 
return 0;
}