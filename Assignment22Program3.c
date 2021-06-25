/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :
*/

#include<stdio.h>
#include<stdlib.h>

/*
Function Name : Display
Input         : Character
Output        : Void
Description   : If input is capital it displays all characters till 'Z' and 
                if input is small it displays all characters till 'a' in reverse order. 
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
 
void Display(char cInput)
{
 if ((cInput>=65)&&(cInput<=90))
 {
  while (cInput<=90)
  {
    printf("%c ",cInput);
	cInput++;
  }
 }
 else if((cInput>=97)&&(cInput<=122))
   while (cInput>=97)
   {
     printf("%c ",cInput);
	 cInput--;
   }
   else
	{
     //printf("%c",cInput);
	 return;
   }
}
int main()
{
 system("cls");
 char cValue='\0';
 printf("Enter character:\n");
 scanf("%c",&cValue);
 Display(cValue);
 return 0;
}