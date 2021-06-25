/*
Accept N numbers from user and return the difference between largest and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
/*
Function Name :- Difference
Input :- Integer Array, Integer
Output:- Integer
Description:- It returns the difference between largest and smallest number in the input array.
Date:- 31-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
int Difference(int Arr[], int iLength)
{
  int iCnt=0;
  int iMin=INT_MAX; 
  //To get maximum positive integer that is supported by 'C' 
  //i.e. INT_MAX= 2147483647 and INT_MIN= -2147483648
  int iMax=INT_MIN;
  for (iCnt=0;iCnt<iLength;iCnt++)
  {
    if (Arr[iCnt]<iMin)
    {
     iMin=Arr[iCnt];
	}
	if (Arr[iCnt]>iMax)
	{
	 iMax=Arr[iCnt];
	}
  }
  return iMax-iMin;
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
  
  iRet=Difference(p,iSize);
  
  printf("Difference between Largest and Smallest number is %d\n",iRet);
   
  free(p);
  return 0;
}
