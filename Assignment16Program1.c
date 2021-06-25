/*
  Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : *   *   *   #
		 *   *   #   *
		 *   #   *   *
		 #   *   *   *
		 41  42  43  44  
		 31  32  33  34  
		 21  22  23  24  
		 11  12  13  14  
 */

#include<stdio.h>
#include<stdlib.h>
/*
 Function Name :- Pattern
 Input         :- Integer , Integer
 Output        :- void
 Description   :- It prints given pattern.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 24-March-2021
*/
void Pattern(int iRow, int iCol)
{
  int i=0, j=0;
  for (i=iRow;i>=1;i--)
  {
    for (j=1;j<=iCol;j++ )
    {
	   if (i==j)
	   {
	     printf("#\t");
	   }
	   else 
	   {
	     printf("*\t");
	   }
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