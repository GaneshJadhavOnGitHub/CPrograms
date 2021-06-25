/*
Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
*/
#include<stdio.h>

int Max(int iNo)
{
  static int iMax=0;
  if(iNo!=0)
 {
  if ((iNo%10)>iMax)
  {
   iMax=iNo%10;
  }
  iNo=iNo/10;
  Max(iNo);
 }
 return iMax;
}

int main()
{
 int iValue=0;
 printf("Enter a number:- ");
 scanf("%d",&iValue);
 int iRet=Max(iValue);
 printf("Largest digit is %d",iRet);
 return 0;
}