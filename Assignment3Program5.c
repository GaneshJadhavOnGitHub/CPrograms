//Accept one character from user and check that character is vowel(a,e,i,o,u) or not.
//Input:E Output:TRUE
//Input:d Output:FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/*
 Function Name :- CheckVowel
 Input         :- Character
 Output        :- BOOL
 Description   :- It is used to check whether input character is vowel or not.
 Author Name   :- Ganesh Kamalakar Jadhav
 Date          :- 28-Feb-2021
*/

BOOL CheckVowel(char cInputCharacter)
{
   //ASCII code of a,A,e,E,i,I,o,O,u,U is compared with input character
   //And if it is one of them then input character is vowel
   //                     a                      A                      e                      E                       i                       I                      o                       O                      u                      U
   if ((cInputCharacter==97)||(cInputCharacter==65)||(cInputCharacter==101)||(cInputCharacter==69)||(cInputCharacter==105)||(cInputCharacter==73)||(cInputCharacter==111)||(cInputCharacter==79)||(cInputCharacter==117)||(cInputCharacter==85)) 
   {
	 return TRUE;
   }
	else 
	{
	  return FALSE;
	}
}

int main()
{
  char cValue='\0';
  BOOL bRet=FALSE;
  printf("Enter character:- ");
  scanf("%c",&cValue);
  bRet=CheckVowel(cValue);
  if(bRet==TRUE)
	{
      printf("%c is vowel.",cValue);
	}
	else
	{
      printf("%c is not a vowel.",cValue);
	}
  return 0;
}