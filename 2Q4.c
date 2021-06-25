//Accept two numbers from user, display first number second no of times.
#include <stdio.h>
void Display(int iNo, int ifrequency)
{
  int i=0;
  if (ifrequency<0)
  {
	ifrequency = -ifrequency;
  }
  for (i=1;i<=ifrequency;i++)
  {
   printf("%d",iNo);
  }
}
int main(int argc, char *argv[])
{
	int iValue=0;
	int iCount=0;
	printf("Enter number:");
	scanf("%d",&iValue);
    printf("Enter frequency:");
	scanf("%d",&iCount);
	Display(iValue,iCount);
	return 0;
}
