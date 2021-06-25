//Write a program which accept number from user and print factors of that number.
//Input  : 24
//Output : 1 2 3 4 6 8 12 24

#include<stdio.h>
/*
Function Name  :- DisplayFactor
Input          :- Integer
Output         :- void
Description    :- It displays factors of Input number
Author Name    :- Ganesh Kamalakar Jadhav
Date           :- 28-Feb-2021 
*/
void DisplayFactor(int iNo)
{
  int i=0;
  int iFactor=0;
  if(iNo<0) //Input updator. If number is negative.
  {
    iNo=-iNo; //Make it positive.
  }
  if (iNo==0)
  {
   return ;
  }
  
  for (i=1;i<=iNo ;i++ )
  {
    if((iNo%i)==0) //If given number is completely divisible
	{
	  printf("%d\t",i);
	}
  }
  /*
  for (i=iNo;i>=1;i-- )
  {
    if ((iNo%i)==0)
    {
      iFactor=iNo/i;
      printf("%d\t",iFactor);   
	}
  }
 */
}


int main()
{
 int iValue=0;
 printf("Enter number whose factors are to be display:- ");
 scanf("%d",&iValue);
 printf("All the factors of given number are as below:\n");
 DisplayFactor(iValue);
 return 0;
}