/*
Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : DisplayASCII
Input         : Void
Output        : Void
Description   : It displays ASCII table.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

void DisplayASCII()
{
 int iCnt=0;
 printf("ASCII Table\n");
 printf("SYM     DEC     OCT    HEX\n");
 for (iCnt=0;iCnt<=255;iCnt++)
 {
  printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
 }
}

int main()
{
 system("cls");
 DisplayASCII();
 return 0;
}