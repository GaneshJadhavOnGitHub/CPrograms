/*
Write a program which accept number from user and print numbers till that number.
Input : 8
Output : 1 2 3 4 5 6 7 8
*/

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- Display
 Input         :- Integer
 Output        :- void
 Description   :- It prints all the numbers till given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 10-March-2021
*/
//Time complexity O(N)=N , Where N is input to the function.
void Display(int iNo)
{
 int iCnt=0; 
 if (iNo<0) //Input corrector.
 {
   iNo=-iNo;
 }
 for (iCnt=1;iCnt<=iNo;iCnt++ )
 {
   printf("%d ",iCnt);
 }
}

int main()
{
 int iValue=0;
 system("cls"); //To clear screen.
 printf("Enter a number: ");
 scanf("%d", &iValue);
 Display(iValue);
 return 0;
}