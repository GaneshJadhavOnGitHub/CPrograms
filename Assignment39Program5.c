/*
Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
*/
#include<stdio.h>

int CountDigit(int iNo)
{
 int iCnt=0;
 int iDigit=0;
 while (iNo!=0)
 {
  iDigit=iNo%10;
  iNo=iNo/10;
  iCnt++;
 }
 return iCnt;
}

int Reverse(int iNo)
{
 //int iSize=CountDigit(iNo);
 int iRev=0;
 int iDigit=0;
 while(iNo>0)
  {
    iDigit=iNo%10;
	iRev=(iRev*10)+iDigit;
	iNo=iNo/10;
  }
  return iRev;
}

int ReverseR(int iNo)
{
 static int iRev=0;
 if (iNo!=0)
 {
  iRev=(iRev*10)+(iNo%10);
  iNo=iNo/10;
  ReverseR(iNo);
 }
 return iRev;
}

int main()
{
 int iValue=0;
 printf("Enter a number:- ");
 scanf("%d",&iValue);
 int iRet=ReverseR(iValue);
 printf("Reverse of %d is %d",iValue,iRet);
 return 0;
}