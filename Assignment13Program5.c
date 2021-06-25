/*
   Accept number of rows and number of columns from user and display below
pattern.
 Input : iRow = 4 iCol = 4
 Output : 1    2   3   4
		  1    *   *   4
		  1    *   *   4
		  1    2   3   4
		  11  12  13  14  
		  21  22  23  24  //i=2 and i+j=4 or i+j=5 
		  31  32  33  34  //i=3 and i+j=5 or i+j=6 
		  41  42  43  44     
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
	   if ((i==2)&&((i+j==4)||(i+j==5)))
	   {
	     printf("* ");
	   }
	   else if((i==3)&&((i+j==5)||(i+j==6)))
		{
	     printf("* ");
	   }
	   else
		{
	     printf("%d ",j);
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