//Accept one character from user and convert case of that character.
//Input:a Output:A
//Input:D Output:d

#include<stdio.h>

/*
 Function Name :- ConvertCase
 Input         :- Character
 Output        :- Character
 Description   :- It is used to convert case of input character.
 Author Name   :- Ganesh Kamalakar Jadhav
 Date          :- 28-Feb-2021
*/

char ConvertCase(char cInputCharacter)
{
   //ASCII code of lowercase alphabets ranges from 97 to 122 So If input is lowercase
   if ((cInputCharacter>=97)&&(cInputCharacter<=122)) //Use && operator which is logical operator Don't use & which is bitwise. 
   {
     cInputCharacter=cInputCharacter-32; //Convert to uppercase by subtracting 32 from ASCII code of input character.
	 return cInputCharacter;
   }
    ////ASCII code of uppercase alphabets ranges from 65 to 90 So If input is uppercase
	else if ((cInputCharacter>=65)&&(cInputCharacter<=90)) //Use && operator which is logical operator Don't use & which is bitwise.  
	{
		cInputCharacter=cInputCharacter+32;//Convert to lowercase by adding 32 to ASCII code of input character.
		return cInputCharacter;
	}
	
	else //If valid alphabet is not entered then return '\0'.
	{
	  return '\0';
	}
}

int main()
{
  char cValue='\0';
  char convertedCValue='\0';
  printf("Enter character:- ");
  scanf("%c",&cValue);
  convertedCValue=ConvertCase(cValue);
  if(convertedCValue=='\0')
	{
      printf("\nNot a valid alphabet!");
	}
	else
	{
      printf("Character after case conversion is  :- %c",convertedCValue);
	}
  return 0;
}