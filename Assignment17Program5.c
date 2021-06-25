/*
 Accept N numbers from user and display all such elements which are
multiples of 11.
Input : N : 6
Elements : 85 66 3 55 93 88
Output : 66 55 88
*/

#include<stdio.h>
/*
Function Name :- Display
Input :- Integer Array, Integer
Output:- void
Description:- It prints all elements in given array which are multiples of 11.
Date:- 24-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
void Display(int Arr[], int iLength)
{
 int iCnt=0;
  for (iCnt=0;iCnt<iLength;iCnt++)
 {
   if ((Arr[iCnt]%11)==0)
   {
    printf("%d\t",Arr[iCnt]);
   }
 }
}
int main()
{
 int iSize=0, iCnt=0;
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
  printf("Numbers which are multiples of 11 are as below- \n");

 Display(p,iSize);
 free(p);
 return 0;
}
