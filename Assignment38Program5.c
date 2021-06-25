//Write a recursive program which accept number from user and return
//product of its digits.
//Input : 523
//Output : 30
#include<stdio.h>
int Mult(int iNo)
{
  int iDigit=0;
  int iSum=1;
  while (iNo!=0)
  {
   iDigit=iNo%10;
   iNo=iNo/10;
   iSum=iSum*iDigit;
  }
  return iSum;
}

int MultR(int iNo)
{
 static int iMult=1;
 if (iNo!=0)
 {
  iMult=iMult*(iNo%10);
  iNo=iNo/10;
  MultR(iNo);
 }
 return iMult;
}

int main()
{
int iValue = 0, iRet = 0;
printf("Enter number:- ");
scanf("%d",&iValue);
iRet = MultR(iValue);
printf("%d",iRet);
return 0;
}