/*
 Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output : 1 2 3 4
		 5 6 7 8
		 9 10 11 12

		 //Maintain all loops counter.
*/

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- Pattern
 Input         :- Integer , Integer
 Output        :- void
 Description   :- It prints given pattern.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 23-March-2021
*/
void Pattern(int iRow, int iCol)
{
  int i=0, j=0;
  int iCnt=1; //To maintain the count of how many times we are entering in the loop. //All loops counter.
  for (i=1;i<=iRow;i++ )
  {
	  for (j=1;j<=iCol ;j++ )
	  {
	    printf("%d ",iCnt);
		iCnt++;
	  }
	  printf("\n");
  }
 }

int main()
{
 int iValue1=0, iValue2=0;
 system("cls"); //To clear screen.
 printf("Enter Number of rows: ");
 scanf("%d", &iValue1);
 printf("Enter Number of columns: ");
 scanf("%d", &iValue2);
 Pattern(iValue1,iValue2);
 return 0;
}