/*
Accept N numbers from user and return the smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
/*
Function Name :- Minimum
Input :- Integer Array, Integer
Output:- Integer
Description:- It returns the smallest number from input array.
Date:- 31-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
int Minimum(int Arr[], int iLength)
{
  int iCnt=0;
  int iMin=INT_MAX; //To get maximum positive integer that is supported by 'C' 
  //i.e. INT_MAX= 2147483647 and INT_MIN= -2147483648 
  for (iCnt=0;iCnt<iLength;iCnt++)
  {
    if (Arr[iCnt]<iMin)
    {
     iMin=Arr[iCnt];
	}
  }
  return iMin;
}
int main()
{
  int iCnt=0;
  int iSize=0;
  int *p=NULL;
  int iRet=0;

  system("cls");
  
  printf("Enter number of elements:\n");
  scanf("%d", &iSize);
  
  p=(int *)malloc(iSize*sizeof(int));
  if (p==NULL)
  {
    printf("Sorry! Unable to allocate memory!\n");
  }

  printf("Enter %d elements:\n",iSize);
  
  for (iCnt=0;iCnt<iSize;iCnt++)
  {
   printf("Enter element %d\n",iCnt+1);
   scanf("%d",&p[iCnt]);
  }
  
  iRet=Minimum(p,iSize);
  
  printf("Smallest number is %d\n",iRet);
   
  free(p);
  return 0;
}
