//Accept a number from user, check that number is even or odd.
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
  if (iNo<0)
  {
	iNo = -iNo;
  }
  if ((iNo%2)==0)
  {
	  return TRUE;
  }
  else
  {
    return FALSE;
  }
}
int main(int argc, char *argv[])
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Enter number:");
	scanf("%d",&iValue);
	bRet=ChkEven(iValue);
	if (bRet==TRUE)
	{
		printf("%d is Even",iValue);
	}
	else
	{
     	 printf("%d is odd",iValue);
	}
	return 0;
}
