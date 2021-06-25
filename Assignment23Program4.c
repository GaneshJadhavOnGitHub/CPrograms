/*
Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name : CheckVowel
Input         : Character Array
Output        : Boolean
Description   : It checks whether given string contains vowel or not.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

bool CheckVowel(char str[])
{
 char *s=NULL;
 bool bResult=false;
 s=str;
 while (*s!='\0')
 {
  if ((*s=='A')||(*s=='a')||(*s=='E')||(*s=='e')||(*s=='I')||(*s=='i')||(*s=='O')||(*s=='o')||(*s=='U')||(*s=='u'))
  {
   bResult=true;
  }
  s++;
 }
 return bResult;
}
int main()
{
system("cls");
char Arr[30];
bool bRet=false;
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
bRet=CheckVowel(Arr);
if (bRet)
{
 printf("Given String contains vowel.\n");
}
else
{
 printf("Given String does not contain vowel.\n");
}
return 0;
}