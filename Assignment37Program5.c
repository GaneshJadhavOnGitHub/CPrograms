//Write a recursive program which display below pattern.
//Input : 6
//Output : a b c d e f

#include<stdio.h>
void DisplayR(int iNo)
{
 static int i=1;
 static char c='a';
 if (i<=iNo)
 {
  printf("%c ",c);
  c++;
  i++;
  DisplayR(iNo);
 }
}

int main()
{
 int iValue=0;
 printf("Enter a number:- ");
 scanf("%d",&iValue);
 DisplayR(iValue);
 return 0;
}