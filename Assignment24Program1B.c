/*
Write a program which accept string from user and convert it into lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/
/*
Note about program :- Arrays Arr[30] and src[] remains unchaged while
Arrays ArrLower[30] and lower[] contains lowercase characters.  
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : ToLowerCase
Input         : Character Array, Character Array
Output        : Void
Description   : It displays array in lower case.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

void ToLowerCase(char src[], char lower[])
{
  char *s=NULL;
  int SrcLen=0;
  int iCnt=0;
  s=src;
  while (*s!='\0')
  {
    s++;
	SrcLen++;
  }
  s--;
  for (iCnt=0;iCnt<SrcLen;iCnt++)
  {
    if ((src[iCnt]>=65)&&(src[iCnt]<=90))
    {
	  char temp='\0';
      temp=src[iCnt]+32;
	  lower[iCnt]=temp;
	}
    else
	{
	  lower[iCnt]=src[iCnt];
	}
  }

printf("\n--------------\n");
printf("%s",src);  //Printed this just out of curiosity.
printf("\n");
printf("%s",lower);//Printed this just out of curiosity.
printf("\n--------------\n");

}

int main()
{
system("cls");
char Arr[30];
char ArrLower[30];
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
ToLowerCase(Arr,ArrLower);
printf("\nOriginal string is :-  ");
printf("%s",Arr); //Printed this just out of curiosity.
printf("\nString after conversion to lowercase is :-  ");
printf("%s",ArrLower);
return 0;
}