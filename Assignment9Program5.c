/*
Write a program which accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
Input : 10 18
Output : 18 17 16 15 14 13 12 11 10
Input : 10 10
Output : 10
Input : -10 2
Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
Input : 90 18
Output : Invalid range
*/

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- RangeDisplayRev
 Input         :- Integer , Integer
 Output        :- void
 Description   :- It prints all numbers in between given range in reverse order.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 10-March-2021
*/
//Time complexity O(N1,N2)= N2-N1 since we have to run loop N2-N1 times 
//therefore time complexity is N2-N1, where N1 and N2 are starting point and ending point.
void RangeDisplayRev(int iStart, int iEnd)
{
 int iCnt=0; 
 if (iStart>iEnd)
 {
   printf("\nInvalid Range\n");
   return;
 }
 for (iCnt=iEnd;iCnt>=iStart;iCnt--) 
 {
   printf("%d ",iCnt);
 }
}

int main()
{
 int iValue1=0, iValue2=0;
 system("cls"); //To clear screen.
 printf("Enter starting point: ");
 scanf("%d", &iValue1);
 printf("Enter ending point: ");
 scanf("%d", &iValue2);
 RangeDisplayRev(iValue1,iValue2);
 return 0;
}