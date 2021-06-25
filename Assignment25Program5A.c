/*
Write a program which accept string from user reverse that string in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/
/*
The program does not perform inplace reverse but prints the string in reverse order.
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : StringReverse
Input         : Character Array(String)
Output        : Void
Description   : It printd the given string in reverse order.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/

void StringReverse(char reverse[])
{
 char *str=NULL;
 int iLength=0;
 str=reverse;
 while (*str!='\0')
 {
  str++;
  iLength++;
 }
 str--;
 while (iLength>=0)
 {
  printf("%c",*str);
  str--;
  iLength--;
 }
}
int main()
{
system("cls");
char Arr[10];
printf("Enter a string:\n");
scanf("%[^'\n']s",Arr);
StringReverse(Arr);
return 0;
}