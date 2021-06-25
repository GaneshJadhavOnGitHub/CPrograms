//Write a program which accept number from user and print even factors of that number.
//Input  : 36
//Output : 2 4 6 12 18 36

#include<stdio.h>
/*
Function Name  :- Display Even Factor
Input          :- Integer
Output         :- void
Description    :- It displays even factors of Input number
Author Name    :- Ganesh Kamalakar Jadhav
Date           :- 28-Feb-2021 
*/

void DisplayEvenFactor(int iNo)
{
  int i=0;
  int iFactor=0;
  //int iEvenFactor=0;
  if (iNo<0) //input updator
  {
    iNo=-iNo;
  }
  if(iNo==0) //If user enter 0.
  {
     return;
  }

  for (i=1;i<=iNo;i++ )
  {
     if((iNo%i)==0) //if Given number iNo is completely divisible by i i.e. i is factor of iNo
	 {
	    if((i%2)==0) //if i is even 
		 {
		   printf("%d\t",i); //Print i.
		 }
	 }
  }

  /*
  //Another way
  for (i=iNo;i>=1;i--)
  {
    if((iNo%i)==0) //iNo is completely divisible by i.
	{
	  iFactor=iNo/i; //Get result of division.(Factor)
	  if((iFactor%2)==0) //If result of division is completely divisible by 2.
	   {
	     printf("%d\t",iFactor); //Display that result (Factor) on screen as it is even factor.
	   }
	}
  }
   */
}

int main()
{
 int iValue=0;
 printf("Enter number whose even factors to be display:- ");
 scanf("%d",&iValue);
 printf("All the even factors of given number are as below:\n");
 DisplayEvenFactor(iValue);
 return 0;
}