/*
Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name :- Check11
Input :- Integer Array, Integer
Output:- Boolean
Description:- It checks whether given array contains 11 or not.
Date:- 24-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
bool Check11(int Arr[], int iLength)
{
 int iCnt=0;
 bool iResult=false;
  for (iCnt=0;iCnt<iLength;iCnt++)
 {
   if (Arr[iCnt]==11)
   {
    iResult=true;
   }
 }
 return iResult;
}
int main()
{
 int iSize=0, iCnt=0 ;
 bool iRet=false;
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

 iRet=Check11(p,iSize);
 if(iRet)
  {
   printf("11 is present\n");
 }
 else
	{
  printf("11 is absent\n");
 }
 free(p);
 return 0;
}
