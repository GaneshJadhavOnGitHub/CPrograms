/*
 Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output : A A A A A
		 B B B B B
		 C C C C C
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
  char cPrint='A';
  for (i=1;i<=iRow ;i++ )
  {
	  for (j=1;j<=iCol ;j++ )
	  {
	    printf("%c ",cPrint);
	  }
	  printf("\n");
	  cPrint++;
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