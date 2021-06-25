/*
Write a program which accept string from user reverse that string in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : StringReverse
Input         : Character Array(String)
Output        : Void
Description   : It reverse the given string in place.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/

void StringReverse(char reverse[])
{
 char *start=NULL;
 char *end=NULL;
 int iLength=0;
 char temp;
 int iCnt=0;
 start=reverse;
 end=reverse;
 while (*end!='\0')
 {
  end++;
  iLength++;
 }
 end--;
 for (iCnt=0;iCnt<(iLength/2);iCnt++ )
 {
  temp=*end;
  *end=*start;
  *start=temp;
   start++;
   end--;
 }
 /*
 while(start<end)
 {
  temp=*end;
  *end=*start;
  *start=temp;
   start++;
   end--;
 }
 */
}
int main()
{
system("cls");
char Arr[10];
printf("Enter a string:\n");
scanf("%[^'\n']s",Arr);
StringReverse(Arr);
printf("Reverse of the string is:- %s",Arr);
return 0;
}