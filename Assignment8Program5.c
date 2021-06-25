/*
Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- MultipleDisplay
 Input         :- Integer
 Output        :- void
 Description   :- It prints first 5 multiples given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 10-March-2021
*/
//Time complexity O(N)=5 since we have to print 5 multiples 
//loop runs for 5 times therefore time complexity is 5.
void MultipleDisplay(int iNo)
{
 int iCnt=0; 
 if (iNo<0) //Input corrector.
 {
   iNo=-iNo;
 }
 for (iCnt=1;iCnt<=5;iCnt++) //Run loop for 5 times since we have to print first 5 multiples.
 {
   printf("%d ",iCnt*iNo);
 }
}

int main()
{
 int iValue=0;
 system("cls"); //To clear screen.
 printf("Enter a number: ");
 scanf("%d", &iValue);
 MultipleDisplay(iValue);
 return 0;
}