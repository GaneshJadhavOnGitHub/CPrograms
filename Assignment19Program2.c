/*
Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name :- FirstOccurance
Input :- Integer Array, Integer, Integer
Output:- Integer
Description:- It returns index of first occurance of given number in the array.
Date:- 24-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
int FirstOccurance(int Arr[],int iLength, int iNo)
{
  int iCnt=0;
  int iRet=0;
  for (iCnt=0;iCnt<iLength;iCnt++)
  {
   if (Arr[iCnt]==iNo)
   {
    iRet=iCnt;
	return iRet;
   }
   else if(Arr[iCnt]!=iNo)
   {
    iRet= -1;
   }
  }
  return iRet;
}
int main()
{
  int iCnt=0;
  int iSize=0;
  int iNo=0;
  int iRet=0;
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
  printf("Enter number whose first occurance is to be checked\n");
  scanf("%d",&iNo);
  iRet=FirstOccurance(p,iSize,iNo);
  printf("First occurance of %d is at %d\n",iNo,iRet);
  free(p);
  return 0;
}
