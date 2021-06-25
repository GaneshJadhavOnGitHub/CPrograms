//Write a program which accepts a number from user 
//and return difference between summation of all its factors and non factors.

//Input  :- 10
//Output :- (1+2+5)-(3+4+6+7+8+9) = 8-37 = -29

#include<stdio.h>
#include<stdlib.h> //Header file to use system function "cls" to clear screen.

//Forward declarations of methods.
int SumFact(int);
int SumNonFact(int);

/*
 Function Name :- FactDiff
 Input         :- Integer
 Output        :- Integer
 Description   :- It calculates the difference between 
                  summation of all factors and non factors of given number.
 Author Name   :- Ganesh Kamalakar Jadhav.
 Date          :- 6-March-2021
*/
int FactDiff(int iNo)
{
  if (iNo==0)
  {
   return 0;
  }
  if(iNo<0)
  {
   iNo=-iNo;
  }

  return (SumFact(iNo) - SumNonFact(iNo));
}

/*
Function Name :- SumFact
Input         :- Integer
Output        :- Integer
Description   :- It calculates summmation of all factors of given number
                 Number is not considered as factor of itself to reduce time complexity by half.
Author Name   :- Ganesh Kamalakar Jadhav
Date          :- 6-March-2021
*/
//Time complexity O(N)= N/2 where N is input number.
int SumFact(int iNo)
{
  
  int iSumFact=0;
  int iCnt=0;
  for (iCnt=1;iCnt<=iNo/2;iCnt++)
  {
     if ((iNo%iCnt)==0)
     {
       iSumFact=iSumFact+iCnt;
	 }
  } 
  return iSumFact;
}

/*
Function Name :- SumNonFact
Input         :- Integer
Output        :- Integer
Description   :- It calculates the summation of all the non factors of given number.
Author Name   :- Ganesh Kamalakar Jadhav
Date          :- 6-March-2021
*/
//Time complexity O(N)= N where N is input number.
int SumNonFact(int iNo)
{
  int iSumNonFact=0;
  int iCnt=0;
  for (iCnt=1;iCnt<=iNo;iCnt++)
  {
    if ((iNo%iCnt)!=0)
    {
      iSumNonFact=iSumNonFact+iCnt;
	}
  }
  return iSumNonFact;
}

int main()
{
 int iValue=0;
 int iRet=0;
 system("cls"); //Clear console.
 printf("Enter number:-");
 scanf("%d",&iValue);
 iRet=FactDiff(iValue);
 printf("Difference between summation of factors and nonfactors of given number is %d",iRet);
 return 0;
}