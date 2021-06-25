/*
Accept N numbers from user and accept one another number as NO ,
return frequency of NO from it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name :- Frequency
Input :- Integer Array, Integer, Integer
Output:- Integer
Description:- It returns frequency of given number from the given array.
Date:- 24-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
int Frequency(int Arr[], int iLength, int iNo)
{
 int iCnt=0;
int iFrequency=0; 
  for (iCnt=0;iCnt<iLength;iCnt++)
  {
   if (Arr[iCnt]==iNo)
   {
    iFrequency++;
   }
 }
 return iFrequency;
}
int main()
{
 int iSize=0, iCnt=0 , iRet=0, iNo=0;
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
 printf("Enter number whose frequency is to be calculated\n");
 scanf("%d",&iNo);

 iRet=Frequency(p,iSize,iNo);
 printf("Frequency of %d is %d \n",iNo,iRet);

 free(p);
 return 0;
}
