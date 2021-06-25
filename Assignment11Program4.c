/*
  Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : *     #    *    #
		 *     #    *    #
		 *     #    *    # 

		(1,1)(1,2)(1,3)(1,4)
		(2,1)(2,2)(2,3)(2,4)
		(3,1)(3,2)(3,3)(3,4)
        when j is odd print * 
	    and j is even print #
		 
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
  for (i=1;i<=iRow ;i++ )
  {
    for (j=1;j<=iCol ;j++ )
    {
		if ((j%2)!=0)
		{
		  printf("* ");
		}
		if((j%2)==0)
		{
		  printf("# ");
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