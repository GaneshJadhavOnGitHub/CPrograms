/*
Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- Pattern
 Input         :- Integer
 Output        :- void
 Description   :- It prints given pattern
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 23-March-2021
*/
void Pattern(int iNo)
{
 int iCnt=0;
 if (iNo<0)  //Input corrector.
 {
   iNo=-iNo;
 }
 char cPrint='A';
 for (iCnt=1;iCnt<=iNo ;iCnt++ )
 {
   printf("%c\t",cPrint);
   cPrint++;
 }
}

int main()
{
 int iValue=0;
 system("cls"); //To clear screen.
 printf("Enter Number of elements: ");
 scanf("%d", &iValue);
 Pattern(iValue);
 return 0;
}