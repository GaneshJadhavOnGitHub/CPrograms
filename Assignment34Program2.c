/*
 Consider below code snippet to solve given problem statements.
Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :
int DisplayPrime(PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89
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
 printf("Linked List - ");
 while (Head!=NULL)
 {
  printf("|%d|-> ",Head->Data);
  Head=Head->Next;
 }
 printf("NULL.\n");
}

bool isPrime(int No)
{
 int i=0;
 for (i=2;i<No;i++)
 {
  if ((No%i)==0)
  {
   break; //Found factor break the loop.
  }
 }
 if (i==No) //All iterations of the for loop are executed 
 //and we did not found factor i.e. for loop is not broken therefore No is prime number
 {
  return true;
 }
 else
 {
  return false;
 }
}

void DisplayPrime(PNODE Head)
{
 bool bPrime=false;
 printf("Prime numbers are : ");
 while (Head!=NULL)
{
 bPrime=isPrime(Head->Data);
 if (bPrime==true)
 {
  printf("%d ",Head->Data);
 }
 Head=Head->Next;
}
 
}
int main()
{
 PNODE First=NULL;
 InsertFirst(&First,89);
 InsertFirst(&First,22);
 InsertFirst(&First,41);
 InsertFirst(&First,17);
 InsertFirst(&First,20);
 InsertFirst(&First,11);
 Display(First);
 DisplayPrime(First);
 return 0;
}