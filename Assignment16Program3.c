/*
  Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 6 iCol = 6
Output : *    *   *   *    *   *
		 *                 *   *
		 *            *        *
		 *        *            *
		 *    *                *
		 *    *   *   *    *   *
		 61  62  63  64   65   66 
		 51  52  53  54   55   56
		 41  42  43  44   45   46
		 31  32  33  34   35   36
		 21  22  23  24   25   26
		 11  12  13  14   15   16 
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
	     printf("*\t");
	   }
	   else if ((i==1)||(i==6))
	   {
	    printf("*\t");
	   }
	   else if ((j==1)||(j==6))
	   {
	    printf("*\t");
	   }
	   else 
	   {
	     printf("\t");
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