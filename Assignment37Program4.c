//Write a recursive program which display below pattern.
//Input : 6
//Output : A B C D E F

#include<stdio.h>

void Display(int iNo)
{
 int i=0;
 char c='A';
 for (i=1;i<=iNo;i++)
 {
  printf("%c ",c);
  c++;
 }
}

void DisplayR(int iNo)
{
 static int i=1;
 static char c='A';
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