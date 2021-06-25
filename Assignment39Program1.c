/*
 Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
*/

#include<stdio.h>

int WhiteSpace(char *str)
{
  static int iWhiteSpace=0;
  //printf("Inside WhiteSpace %d ",iWhiteSpace);

  if(*str!='\0')
    {
      //printf("  Inside First if  ");
       if (*str==32) //32 is ASCII code of whitespace
       {
        iWhiteSpace++;
		//printf("%d ",iWhiteSpace);
	   }
		str++;
        WhiteSpace(str);
    }
  else
   {
      return iWhiteSpace;
   }

}

int main()
{
int iRet = 0;
char arr[20];
printf("Enter string:- ");
scanf("%[^'\n']s",arr);
iRet = WhiteSpace(arr);
printf("Number of White Spaces are %d",iRet);
return 0;
}