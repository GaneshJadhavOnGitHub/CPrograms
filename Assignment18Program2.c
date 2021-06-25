/*
Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name :- Frequency
Input :- Integer Array, Integer
Output:- Integer
Description:- It returns difference between frequency of even number and odd numbers.
Date:- 24-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
int Frequency(int Arr[], int iLength)
{
 int iCnt=0;
 int iCntEven=0;
 int iCntOdd=0;
 int iDifference=0;
 
  for (iCnt=0;iCnt<iLength;iCnt++)
 {
   if ((Arr[iCnt]%2)==0)
   {
    iCntEven++;
   }
   else if ((Arr[iCnt]%2)!=0)
   {
    iCntOdd++;
   }
 }
 iDifference=iCntEven-iCntOdd;
 return iDifference;
}
int main()
{
 int iSize=0, iCnt=0 , iRet=0;
 int *p=NULL;
 system("cls");
 printf("Enter number of elements:\n");
 scanf("%d",&iSize);
 p=(int*)malloc(iSize*sizeof(int));
 if (p==NULL)
 {
  printf("Unable to allocate memory\n");
  return -1;
 }
 printf("Enter %d elements\n",iSize);
 for (iCnt=0;iCnt<iSize;iCnt++)
 {
   printf("Enter element %d\n",iCnt+1);
   scanf("%d",&p[iCnt]);
 }

 iRet=Frequency(p,iSize);
 printf("Difference between frequency of even numbers and odd numbers is %d \n",iRet);

 free(p);
 return 0;
}
