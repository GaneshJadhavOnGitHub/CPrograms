/*
 Consider below code snippet to solve given problem statements.
 Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9
*/

#include<stdio.h>
#include<stdlib.h>
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
 printf("Linked list: ");
 while (Head!=NULL)
 {
  printf("|%d|-> ",Head->Data);
  Head=Head->Next;
 }
 printf("NULL.\n");
}

void DisplayLarge(PNODE Head)
{
 printf("Largest digit in each element : ");
 while (Head!=NULL)
 {
  int iDigit=0;
  int Max=0;
  int No=Head->Data;
  while (No!=0)
  {
   iDigit=No%10;
   if (iDigit>Max)
   {
    Max=iDigit;
   }
   No=No/10;
  }
  printf("%d ",Max);
  Head=Head->Next;
 }
}
int main()
{
 PNODE First=NULL;
 InsertFirst(&First,419);
 InsertFirst(&First,532);
 InsertFirst(&First,250);
 InsertFirst(&First,11);
 Display(First);
 DisplayLarge(First);
 return 0;
}