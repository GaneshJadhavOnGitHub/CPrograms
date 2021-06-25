//Write a program which accepts one number from user 
//and print that number of even number of even numbers on screen.
//Input 7
//Output 2 4 6 8 10 12 14
#include<stdio.h>

/*
Function Name :- PrintEven
Input         :- Integer
Output        :- void
Description   :- Display all even numbers till Input number.
Author Name   :- Ganesh Kamalakar Jadhav
Date          :- 28-Feb-2021
*/
void PrintEven(int iNo)
{
 if(iNo<=0)
 {
  iNo=-iNo;
 }
 int iCnt=0;
 iNo=iNo*2; //We want to iterate upto (iNo*2).
 for (iCnt=1;iCnt<=iNo ; iCnt++)
 {
	 if((iCnt%2)==0)
	 {
	   printf("%d\t",iCnt);
	 }
 }
}
int main()
{
  int iValue=0;
  printf("Number of even numbers\n");
  scanf("%d",&iValue);
  PrintEven(iValue);
  return 0;
}