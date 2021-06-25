/*
Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
		 Octal 0101
         Hexadecimal 0X41
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : DisplayASCIIValue
Input         : Character
Output        : Void
Description   : It displays ASCII Value of input character.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
void DisplayASCIIValue(char cInput)
{
 printf("\nASCII Values of %c \n",cInput);
 printf("--------------------\n");
 printf("Decimal     : %d\n",cInput);
 printf("Octal       : 0%o\n",cInput);
 printf("Hexadecimal : 0x%x\n",cInput);
}

int main()
{
system("cls");
char cValue='\0';

printf("Enter a character: \n");
//scanf("%[^'\n']s",&cValue);
scanf("%c",&cValue);


DisplayASCIIValue(cValue);

return 0;
}
