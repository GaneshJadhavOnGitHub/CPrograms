/*
Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $ * $ * $ * $ * $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ * $ * $ *
*/
#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- Pattern
 Input         :- Integer
 Output        :- void
 Description   :- It prints $ & * for given number of times.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 10-March-2021
*/
//Time complexity O(N)=N , Where N is input to the function.
void Pattern(int iNo)
{
 //int iCnt=0;
 if (iNo<0)
 {
  iNo=-iNo; //Input corrector.
 }
 /*
 for (iCnt=1;iCnt<=iNo ;iCnt++)
 {
   printf("$ * ");
 }
 */
 while (iNo>0)
 {
     printf("$ * ");
     iNo--;
 }
}
int main()
{
 int iValue=0;
 system("cls"); //To clear screen.
 printf("Enter a number: ");
 scanf("%d", &iValue);
 Pattern(iValue);
 return 0;
}