/*
Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18
Output : 126
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- RangeSum
 Input         :- Integer , Integer
 Output        :- Integer
 Description   :- It return addition of all numbers
                  in between given range. (Range should contains positive numbers only)
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 10-March-2021
*/
//Time complexity O(N1,N2)= N2-N1 since we have to run loop N2-N1 times 
//therefore time complexity is N2-N1, where N1 and N2 are starting point and ending point.
int RangeSum(int iStart, int iEnd)
{
 int iCnt=0;
 int iSum=0;
 if (iStart<0)
 {
   //printf("\nInvalid Range\n");
   return -1; //-1 indicate invalid range
 }
 if (iStart>iEnd)
 {
   //printf("\nInvalid Range\n");
   return -1; //-1 indicate invalid range
 }
 for (iCnt=iStart;iCnt<=iEnd;iCnt++) 
 {
  iSum=iSum+iCnt; 
 }
 return iSum;
}

int main()
{
 int iValue1=0, iValue2=0, iRet=0;
 system("cls"); //To clear screen.
 printf("Enter starting point: ");
 scanf("%d", &iValue1);
 printf("Enter ending point: ");
 scanf("%d", &iValue2);
 iRet=RangeSum(iValue1,iValue2);
 if (iRet==-1)
 {
  printf("\nInvalid Range\n");
 }
 else
  {
   printf("Addition is %d",iRet);
  }
 return 0;
}