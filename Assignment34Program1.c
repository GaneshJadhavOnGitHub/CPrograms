/*
Consider below code snippet to solve given problem statements.
Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :
int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28
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

//bool isPerfect(int iNo);
void InsertFirst(PPNODE Head, int No)
{
 PNODE newn=NULL;
 newn = (PNODE)malloc(sizeof(NODE));
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

bool isPerfect(int iNo)
{
 int i=1;
 int iSum=0;
 for (i=1;i<=iNo/2;i++)
 {
  if ((iNo%i)==0)
  {
   iSum=iSum+i;
  }
 }
 if (iSum==iNo)
 {
  return true;
 }
 else
 {
  return false;
 }
}

void DisplayPerfect(PNODE Head)
{
 bool bRet=false;
 printf("Perfect Numbers are :- ");
 while (Head!=NULL)
 {
  int iPerfect=0;
  iPerfect=(int)Head->Data;
  bRet=isPerfect(iPerfect);
  if (bRet==true)
  {	
   printf("%d ",iPerfect);
  }
  Head=Head->Next;
 }
}

int main()
{
 PNODE First=NULL;
 InsertFirst(&First,89);
 InsertFirst(&First,6);
 InsertFirst(&First,41);
 InsertFirst(&First,17);
 InsertFirst(&First,28);
 InsertFirst(&First,11);
 Display(First);
 DisplayPerfect(First);
 return 0;
}