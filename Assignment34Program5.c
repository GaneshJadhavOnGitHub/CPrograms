/*
Consider below code snippet to solve given problem statements.
Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10
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
 printf("Linked List: ");
 while (Head!=NULL)
 {
  printf("|%d|-> ",Head->Data);
  Head=Head->Next;
 }
 printf("NULL.\n");
}
void SumDigit(PNODE Head)
{
 while (Head!=NULL)
 {
  int iNo=0;
  int iSum=0;
  int iDigit=0;
  iNo=(int)Head->Data;
  while (iNo>0)
  {
   iDigit=iNo%10;
   iSum=iSum+iDigit;
   iNo=iNo/10;
  }
  printf("%d ",iSum);
  Head=Head->Next;
 }
}
int main()
{
 PNODE First=NULL;
 InsertFirst(&First,640);
 InsertFirst(&First,240);
 InsertFirst(&First,20);
 InsertFirst(&First,230);
 InsertFirst(&First,110);
 Display(First);
 SumDigit(First);
 return 0;
}