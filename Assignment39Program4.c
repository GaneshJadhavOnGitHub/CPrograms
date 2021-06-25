/*
Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3
*/
#include<stdio.h>

int Min(int iNo)
{
  static int iMin=99999;
  if(iNo!=0)
 {
  if ((iNo%10)<iMin)
  {
   iMin=iNo%10;
  }
  iNo=iNo/10;
  Min(iNo);
 }
 return iMin;
}

int main()
{
 int iValue=0;
 printf("Enter a number:- ");
 scanf("%d",&iValue);
 int iRet=Min (iValue);
 printf("Smallest digit is %d",iRet);
 return 0;
}