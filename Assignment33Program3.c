/*
Consider below code snippet to solve given problem statements.
Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :
int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100
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
 printf("Linked list - ");
 while (Head!=NULL)
 {
  printf("|%d|-> ",Head->Data);
  Head=Head->Next;
 }
 printf("NULL.\n");
}

int Summation(PNODE Head)
{
 int iSum=0;
 while (Head!=NULL)
 {
  iSum=iSum+Head->Data;
  Head=Head->Next;
 }
 return iSum;
}


int main()
{
 PNODE First=NULL;
 int iRet=0;
 InsertFirst(&First,40);
 InsertFirst(&First,30);
 InsertFirst(&First,20);
 InsertFirst(&First,10);
 Display(First);
 iRet=Summation(First);
 printf("Addition of all numbers in the list is : %d.",iRet);
 return 0;
}