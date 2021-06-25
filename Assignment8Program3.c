/*
Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4
*/

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- Display
 Input         :- Integer
 Output        :- void
 Description   :- It prints numbers line of given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 10-March-2021
*/
//Time complexity O(N)=(N*2)+1 , Where N is input to the function.
void Display(int iNo)
{
 int iCnt=0; 
 if (iNo<0) //Input corrector.
 {
   iNo=-iNo;
 }
 for (iCnt=-iNo;iCnt<=iNo;iCnt++ )
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