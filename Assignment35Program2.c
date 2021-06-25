/*
Consider below code snippet to solve given problem statements.
Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#pragma pack(1)

struct node
{
 int Data;
 struct node* Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
 PNODE newn=NULL;
 newn=(PNODE)malloc(sizeof(NODE));
 newn->Data=No;
 newn->Next=NULL;
 if (*Head==NULL)
 {
  *Head=newn;
 }
 else
 {
  newn->Next=*Head;
  *Head=newn;
 }
}

void Display(PNODE Head)
{
 printf("Linked List: ");
 while (Head!=NULL)
 {
  printf("|%d|-> ",Head->Data);
  Head=Head->Next;
 }
 printf("NULL.\n");
}

void DisplayPalindrome(PNODE Head)
{
 printf("Palindrome Numbers: ");
 while (Head!=NULL)
 {
  int iDigit=0;//We want to find digits of number in each node separately so everytime while loop begins iDigit should be set to 0. 
  int iRev=0;
  int No=0;
  No=Head->Data;
  while (No!=0)
  {
   iDigit=No%10;
   iRev=(iRev*10)+iDigit;
   No=No/10;
  }
  
  if (iRev==Head->Data)
  {
   printf("%d\t",iRev);
  }
  Head=Head->Next;
 }
}
int main()
{
 PNODE First=NULL;
 InsertFirst(&First,89);
 InsertFirst(&First,6);
 InsertFirst(&First,414);
 InsertFirst(&First,17);
 InsertFirst(&First,28);
 InsertFirst(&First,11);
 Display(First);
 DisplayPalindrome(First);
 return 0;
}