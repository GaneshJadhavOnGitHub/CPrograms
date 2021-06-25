/*
 Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name : ChangeCase
Input         : Character
Output        : Void
Description   : It changes case of input character and displays it.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
void ChangeCase(char cInput)
{
 if ((cInput>=65)&&(cInput<=90))
 {
  cInput=cInput+32;//
  printf("%c",cInput);
 }
 else if ((cInput>=97)&&(cInput<=122))
 {
  cInput=cInput-32;
  printf("%c",cInput);
 }
 else
   { 
    printf("%c",cInput);
   }
}

int main()
{
system("cls");
char cValue='\0';

printf("Enter a character: \n");
//scanf("%[^'\n']s",&cValue);
scanf("%c",&cValue);


ChangeCase(cValue);

return 0;
}