/*
Accept N numbers from user and display all such numbers which contains 3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name :- Digits
Input :- Integer Array, Integer
Output:- Void
Description:- It displays all such numbers from input array , which contains 3 digits in it.
Date:- 31-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/
void Digits(int Arr[], int iLength)
{
  int iCnt=0;
  for (iCnt=0;iCnt<iLength;iCnt++)
  {
    if(NumberOfDigits(Arr[iCnt])==3)
	{
	  printf("%d\t",Arr[iCnt]);
	}
  }
  
}
/*
Function Name :- NumberOfDigits
Input :- Integer
Output:- Integer
Description:- It returns number of digits in the given number.
Date:- 31-March-2021
Author Name:- Ganesh Kamalakar Jadhav.
*/

int NumberOfDigits(int iNo)
{
  int iNumberOfDigits=0;
  int iDigit=0;
 while(iNo>0)
 {
   iDigit=iNo%10;
   iNo=iNo/10;
   iNumberOfDigits++;
 }
 return iNumberOfDigits;
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
  
  Digits(p,iSize);
   
  free(p);
  return 0;
}
