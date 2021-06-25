/*
 Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
		 a b c d
		 A B C D
		 a b c d 
		 
		when i is odd Capital letters are printed
	and when i is even small letters are printed.
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
  char cPrint='\0';
  for (i=1;i<=iRow ;i++ )
  {
	  if ((i%2)!=0)
	  {
	    char cPrint='A';
        for (j=1;j<=iCol ;j++ )
         {
	       printf("%c ",cPrint);
	       cPrint++;
	     }
	  }
	
	  if ((i%2)==0)
	  {
	    char cPrint='a';
        for (j=1;j<=iCol ;j++ )
         {
	       printf("%c ",cPrint);
	       cPrint++;
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