/*
Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13 15 17
*/

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- OddDisplay
 Input         :- Integer
 Output        :- void
 Description   :- It prints all odd numbers upto given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 10-March-2021
*/
//Time complexity O(N)=N , Where N is input to the function.
void OddDisplay(int iNo)
{
 int iCnt=0; 
 if (iNo<0) //Input corrector.
 {
   iNo=-iNo;
 }
 for (iCnt=1;iCnt<=iNo;iCnt++) //Run loop from 1 to given number.
 {
	 if ((iCnt%2)!=0) //If number is not completely divisible by 2 i.e. it is odd
	 {
	   printf("%d ",iCnt);
	 }
 }
}

int main()
{
 int iValue=0;
 system("cls"); //To clear screen.
 printf("Enter a number: ");
 scanf("%d", &iValue);
 OddDisplay(iValue);
 return 0;
}