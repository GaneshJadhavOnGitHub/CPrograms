/*
Consider below code snippet to solve given problem statements.
Write a program which return largest element from singly linear linked
list.
Function Prototype :
int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 320
*/

#include<stdio.h>
#include<stdlib.h>
#include<MinMax.h>
#pragma pack(1)

struct node
{
 int Data;
 struct node* Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;

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
 printf("Linked List - ");
 while (Head!=NULL)
 {
  printf("|%d|-> ",Head->Data);
  Head=Head->Next;
 }
 printf("NULL.\n");
}

int Maximum(PNODE Head)
{
 int Max=INT_MIN;
 while (Head!=NULL)
 {
  if (Head->Data>Max)
  {
   Max=Head->Data;
  }
  Head=Head->Next;
 }
 return Max;
}
int main()
{
 PNODE First=NULL;
 int iRet=0;
 InsertFirst(&First,240);
 InsertFirst(&First,320);
 InsertFirst(&First,230);
 InsertFirst(&First,110);
 Display(First);
 iRet=Maximum(First);
 printf("Maximum number in the list is %d.",iRet);
 return 0;
}