//Write a program which accepts a number from user 
//and display its factors in decreasing order.

//Input  :- 6
//Output :- 6 3 2 1

#include<stdio.h>
#include<stdlib.h> //Header file to use system function "cls" to clear screen.
/*
 Function Name :-FactRev
 Input         :-Integer
 Output        :-void
 Description   :-It displays factors of given/input number in reverse order.
 Author Name   :-Ganesh Kamalakar Jadhav
 Name          :-1-March-2021
*/
void FactRev(int iNo)
{
  int iCnt=0;
  int iFactor=0;

  if(iNo<0) //Input corrector If input number is negative make it positive.
  {
    iNo=-iNo;
  }
  if(iNo==0)
  {
   printf("0\n"); 
   return;
  }
  
  for (iCnt=iNo;iCnt>=1 ;iCnt-- )
  {
   if ((iNo%iCnt)==0) //If given number is completely divisible 
   {
    printf("%d\t",iCnt);
   }
  }
  /*
  //Another way of displaying factors in reverse order. 
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if((iNo%iCnt)==0) //If given number is completely divisible
	{
	  iFactor=iNo/iCnt; //Get result of division as iFactor as we have to print factor in reverse order we get division as factor.
	  printf("%d\t",iFactor);
	}
  }
  */

}


int main()
{
 int iValue =0;
 system("cls"); //To clear console.
 printf("Enter number:-");
 scanf("%d",&iValue);
 printf("Factors of above number in reverse order are as below\n");
 FactRev(iValue);
 return 0;
}