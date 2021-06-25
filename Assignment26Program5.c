/*
Write a program which accepts 2 strings from user and concat second string
after first string. (Implement strcat() function).
Input : “Marvellous Infosystems”
“Logic Building”
Output : “Marvellous Infosystems Logic Building”
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : StringConcat
Input         : Character Pointer, Character Pointer
Output        : void
Description   : It concats two strings.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/

void StringConcat(char *src, char *dest)
{
 int iLength=0;
 if ((src==NULL)||(dest==NULL))
 {
  return;
 }
 while (*src!='\0')
 {
  src++;
  iLength++;
 }
 *src=' '; //To insert one space at the end of first string.
 src++;    //Increment the src after adding space. 
 while (*dest!='\0')
 {
  *src=*dest;
   dest++;
   src++;
 }
 *src='\0';
}

int main()
{
 system("cls");
 char Arr[100];
 char Brr[20];
 printf("Enter First String:\n");
 scanf("%[^'\n']s",Arr);
 printf("Enter Second String:\n");
 scanf(" %[^'\n']s",Brr); //Note this.
 StringConcat(Arr,Brr);
 printf("String after concatenation is - %s",Arr);
 return 0;
}