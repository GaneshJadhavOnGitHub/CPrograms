/*
 Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5
*/

#include<stdio.h>

int Small(char *str)
{
  static int iSmallChar=0;

  if(*str!='\0')
    {
       if ((*str<=122)&&(*str>=97)) //97 to 122 are ASCII codes of small characters
       {
        iSmallChar++;
	   }
		str++;
        Small(str);
    }
  else
   {
      return iSmallChar;
   }

}

int main()
{
int iRet = 0;
char arr[20];
printf("Enter string:- ");
scanf("%[^'\n']s",arr);
iRet = Small(arr);
printf("Number of small characters are %d",iRet);
return 0;
}