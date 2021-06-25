/*
Accept N numbers from user and return the largest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 93
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name :- Maximum
Input :- Integer Array, Integer
Output:- Integer
Description:- It returns the largest number from input array.
Date:- 31-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
int Maximum(int Arr[], int iLength)
{
  int iCnt=0;
  int iMax=0;
	for (iCnt=0;iCnt<iLength;iCnt++)
	 {
	   if (Arr[iCnt]>iMax)
	   {
	    iMax=Arr[iCnt];
	   }
	 }
  return iMax;
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
  
  iRet=Maximum(p,iSize);
  
  printf("Largest number is %d\n",iRet);
   
  free(p);
  return 0;
}
