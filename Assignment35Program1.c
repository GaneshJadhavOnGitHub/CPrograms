/*
Consider below code snippet to solve given problem statements.
Write a program which reverse each element of singly linked list.
Function Prototype :
void Reverse( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|
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
 PNODE newn = NULL;
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

void Reverse(PNODE Head)
{
 while (Head!=NULL)
 {
  int iDigit=0;//We want to find digits of number in each node separately so everytime while loop begins (node changes)iDigit should be set to 0. 
  int iRev=0; //iRev stores the reverse of each number in the node so everytime while loop begins(node changes) it should be set to 0;
  while ((Head->Data)!=0) 
  {
   iDigit=((Head->Data)%10); 
   iRev=(iRev*10)+iDigit;
   (Head->Data)=(Head->Data)/10;
  }
  Head->Data=iRev;
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
 Reverse(First);
 printf("After reversing numbers ");
 Display(First);
 return 0;
}





