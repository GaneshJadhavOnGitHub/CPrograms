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
Input         : Character Array, Character Array
Output        : Void
Description   : It displays array in lower case.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

void ToLowerCase(char src[])
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
     src[iCnt]=src[iCnt]+32;
	}
  }
  /*
  printf("\nsrc is as below\n");
  printf("%s",src); //Printing src[] just out of curiosity. 
  printf("\n");
  */
}

int main()
{
system("cls");
char Arr[30];
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
printf("String after conversion to lower case is as below\n");
ToLowerCase(Arr);//ToLowerCase(Arr) means ToLowerCase(100) where 100 is address of Arr[30].  
//Arrays are always pass by refernce because they are pointers so no need to pass by value.
//the array's memory is not copied. The function uses the memory of the same array that is passed to it, 
//and can change what is in that memory. So Arr[30] and src[] are changed in this program.
//This is same as reference in C++.
printf("%s",Arr); 
return 0;
}