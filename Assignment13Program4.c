/*
   Accept number of rows and number of columns from user and display below
pattern.
 Input : iRow = 6 iCol = 5
 Output : *    *   *   *  *
		  *    @   @   @  *
		  *    @   @   @  *
		  *    @   @   @  *
		  *    @   @   @  *
		  *    *   *   *  *
		  11  12  13  14  15
		  21  22  23  24  25   //i=2 and i+j=4 or i+j=5 or i+j=6
		  31  32  33  34  35   //i=3 and i+j=5 or i+j=6 or i+j=7
		  41  42  43  44  45   //i=4 and i+j=6 or i+j=7 or i+j=8
		  51  52  53  54  55   //i=5 and i+j=7 or i+j=8 or i=j=9
		  61  62  63  64  65


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
	   if ((i==2)&&((i+j==4)||(i+j==5)||(i+j==6)))
	   {
	     printf("@ ");
	   }
	   else if((i==3)&&((i+j==5)||(i+j==6)||(i+j==7)))
		{
	     printf("@ ");
	   }
	   else if((i==4)&&((i+j==6)||(i+j==7)||(i+j==8)))
		{
	     printf("@ ");
	   }else if((i==5)&&((i+j==7)||(i+j==8)||(i+j==9)))
		{
	     printf("@ ");
	   }
	   else
		{
	     printf("* ");
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