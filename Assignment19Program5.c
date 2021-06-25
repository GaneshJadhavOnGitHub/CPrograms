/*
Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name :- Product
Input :- Integer Array, Integer
Output:- Integer
Description:- It returns product of all odd elements in the array.
Date:- 24-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
int Product(int Arr[],int iLength)
{
  int iRet=1;
  int isAnyOdd=0;
  int iCnt=0;
  for (iCnt=0;iCnt<iLength ;iCnt++ )
  {
  if ((Arr[iCnt]%2)!=0)
   {
    isAnyOdd++;
    iRet=iRet*Arr[iCnt];
   }
  }
  if (isAnyOdd==0)
  {
    iRet=0;
  }
return iRet;
  }
int main()
{
  int iCnt=0;
  int iSize=0;
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
  iRet=Product(p,iSize);
   printf("Product of odd elements  is %d\n",iRet);
  free(p);
  return 0;
}
