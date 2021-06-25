/*
Accept N numbers from user and display summation of digits of each number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name :- DigitsSum
Input :- Integer Array, Integer
Output:- Void
Description:- It displays summation of digits of each number in the input array.
Date:- 31-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
void DigitsSum(int Arr[], int iLength)
{
  int iCnt=0;
  for (iCnt=0;iCnt<iLength;iCnt++)
  {
   printf("%d\t",DigitsSummation(Arr[iCnt]));
  }
  
}
/*
Function Name :- DigitsSummation
Input :- Integer
Output:- Integer
Description:- It returns summation of digits of the given number.
Date:- 31-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/

int DigitsSummation(int iNo)
{
  int iDigit=0;
  int iSum=0;
 while(iNo>0)
 {
   iDigit=iNo%10;
   iSum=iSum+iDigit;
   iNo=iNo/10;
 }
 return iSum;
}
int main()
{
  int iCnt=0;
  int iSize=0;
  int *p=NULL;

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
  
  DigitsSum(p,iSize);
   
  free(p);
  return 0;
}
