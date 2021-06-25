/*
Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 85 66 76 88
Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output : 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name :- Range
Input :- Integer Array, Integer, Integer, Integer
Output:- void
Description:- It returns all elements in input range from input array.
Date:- 31-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
void Range(int Arr[],int iLength, int iStart, int iEnd)
{
   int iCnt=0;
   if (iStart>iEnd)
   {
    return;
   }
   for (iCnt=0;iCnt<iLength;iCnt++)
   {
     if ((Arr[iCnt]<iEnd)&&(Arr[iCnt]>iStart))
     {
       printf("%d\t",Arr[iCnt]);
	 }
   }
}
int main()
{
  int iSize=0;
  int iCnt=0;
  int iValue1=0;
  int iValue2=0;
  int *p=NULL;

  printf("Enter number of Elements:\n");
  scanf("%d",&iSize);

  p=(int*)malloc(iSize*sizeof(int));

  if (p==NULL)
  {
    printf("Unable to allocate memory.\n");
  }

  printf("Enter %d elements\n",iSize);
  
  for (iCnt=0;iCnt<iSize ;iCnt++)
  {
    printf("Enter element %d\n",iCnt+1);
	scanf("%d",&p[iCnt]);
  }


  printf("Enter range\n");
  printf("Enter starting number : \n");
  scanf("%d",&iValue1);
  printf("Enter ending number : \n");
  scanf("%d",&iValue2);

  Range(p,iSize,iValue1,iValue2);
  
  free(p);
  return 0;
}
