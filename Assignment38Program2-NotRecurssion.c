//Write a recursive program which accept number from user and return
//summation of its digits.
//Input : 879
//Output : 24
#include<stdio.h>
int Sum(int iNo)
{
  int iDigit=0;
  int iSum=0;
  while (iNo!=0)
  {
   iDigit=iNo%10;
   iNo=iNo/10;
   iSum=iSum+iDigit;
  }
  return iSum;
}

int SumR(int iNo)
{
 static int iSum=0;
 if (iNo!=0)
 {
  iSum=iSum+(iNo%10);
  iNo=iNo/10;
  SumR(iNo);
 }
 return iSum;
}

int main()
{
int iValue = 0, iRet = 0;
printf("Enter number:- ");
scanf("%d",&iValue);
iRet = SumR(iValue);
printf("%d",iRet);
return 0;
}