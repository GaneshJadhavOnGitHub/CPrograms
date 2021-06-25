/*
 Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/

#include<stdio.h>
/*
Function Name :- Difference
Input :- Integer Array, Integer
Output:- Integer
Description:- It calculates difference between summation
              of even elements and summation of odd elements in given array.
Date:- 24-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
int Difference(int Arr[], int iLength)
{
 int iCnt=0,iResult=0,iSumEven=0,iSumOdd=0;
 for (iCnt=0;iCnt<iLength;iCnt++)
 {
   if ((Arr[iCnt]%2)==0)
   {
    iSumEven=iSumEven+Arr[iCnt];
   }
   else if ((Arr[iCnt]%2)!=0)
   {
    iSumOdd=iSumOdd+Arr[iCnt];
   }
 }
   iResult=iSumEven-iSumOdd;
   //printf("Sum of Even = %d\n",iSumEven);
   //printf("Sum of Odd = %d\n",iSumOdd);
   return iResult;
}
int main()
{
 int iSize=0, iRet=0, iCnt=0;
 int *p=NULL;

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
 iRet=Difference(p,iSize);
 printf("Result is %d",iRet);
 free(p);
 return 0;
}
