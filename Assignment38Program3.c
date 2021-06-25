/*
Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5
*/

#include<stdio.h>

int Strlen(char *str)
{
    static int length=0;
    if(*str!='\0')
    {
        length++;
		str++;
        Strlen(str);
    }
    else
    {
      return length;
    }

}

int main()
{
int iRet = 0;
char arr[20];
printf("Enter string:- ");
scanf("%s",arr);
iRet = Strlen(arr);
printf("Length of given string is %d",iRet);
return 0;
}