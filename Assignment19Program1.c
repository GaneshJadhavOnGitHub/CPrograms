/*
Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name :- Check
Input :- Integer Array, Integer, Integer
Output:- Boolean
Description:- It checks whether given number is present or not in the array.
Date:- 24-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
bool Check(int Arr[],int iLength, int iNo)
{
  bool bResult=false;
  int iCnt=0;
  for (iCnt=0;iCnt<iLength ;iCnt++ )
  {
  if (Arr[iCnt]==iNo)
   {
    break;
   }
  }
  if (iCnt==iLength) //To check whether break occurred or whole array is traversed.
 {
  return -1;
 }
 else
	{
      return iCnt;
	}
}
int main()
{
  int iCnt=0;
  int iSize=0;
  int iNo=0;
  bool bResult=false;
  int *p=NULL;
  
  system("cls");
  printf("Enter number of elements: \n");
  scanf("%d",&iSize);

  p=(int*)malloc(iSize*sizeof(int));

  if (p==NULL)
  {
   printf("Memory can not be allocated\n");
   return -1;
  }

  printf("Enter %d elements\n",iSize);
  
  for (iCnt=0;iCnt<iSize ;iCnt++)
  {
    printf("Enter element %d\n",iCnt+1);
	scanf("%d",&p[iCnt]);
  }
  printf("Enter number which is to be checked\n");
  scanf("%d",&iNo);
  bResult=Check(p,iSize,iNo);
  if (bResult)
  {
   printf("%d is present\n",iNo);
  }
  else
	{
   printf("%d is absent\n",iNo);
  }
  free(p);
  return 0;
}
