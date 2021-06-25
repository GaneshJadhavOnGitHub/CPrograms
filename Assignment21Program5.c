/*
Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM 
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : DisplaySchedule
Input         : Character
Output        : Void
Description   : It displays exam time for the given division.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
void DisplaySchedule(char chDiv)
{
 switch (chDiv)
 {
 case 'A':
   printf("Your exam is at 7:00 AM");
   break;
 case 'a':
   printf("Your exam is at 7:00 AM");
   break;
 case 'B':
   printf("Your exam is at 8:30 AM");
   break;
 case 'b':
   printf("Your exam is at 8:30 AM");
   break;
 case 'C':
   printf("Your exam is at 9:20 AM");
   break;
 case 'c':
   printf("Your exam is at 9:20 AM");
   break;
 case 'D':
   printf("Your exam is at 10:30 AM");
   break;
 case 'd': 
   printf("Your exam is at 10:30 AM");
   break;
 default :
   printf("Please enter correct division!\n");
   break;

 }
}

int main()
{
system("cls");
char cValue='\0';

printf("\t\tProgram to show exam time for the division\n");
printf("\t\t----------------------------------------------\n\n");
printf("Enter your division: \n");
scanf("%c",&cValue);

DisplaySchedule(cValue);

return 0;
}