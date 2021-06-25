/*
Write a program which accept number from user and display its digits in reverse
order.
Input : 2395
Output : 5 9 3 2
Input : 1018
Output : 8 1 0 1
*/

#include <stdio.h>
/*
 Function Name :- DisplayDigit
 Input         :- Integer
 Output        :- void
 Description   :- It displays digits of given number in reverse order.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 6-March-2021
*/
//Time complexity O(N)=x when x digit number is given as input to function.

void DisplayDigit(int iNo)
{
  int iDigit;
  //int iTimeComplexity=0;
  if (iNo<0)
  {
    iNo=-iNo;
  }
  while(iNo!=0)
	{
      iDigit=iNo%10;
      printf("%d\t",iDigit);
	  iNo=iNo/10;
	  //iTimeComplexity++;
   }
  //printf("\nTime Complexity-> %d",iTimeComplexity);
}

int main()
{
	int iValue=0;
	printf("Enter number:- ");
	scanf("%d",&iValue);
	printf("Digits of given number in reverse order are as below: \n");
    DisplayDigit(iValue);
    return 0;
}