/*
Consider below code snippet to solve given problem statements.
Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :
void DisplayProduct( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4
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
 printf("Linked List: ");
 while (Head!=NULL)
 {
  printf("|%d|-> ",Head->Data);
  Head=Head->Next;
 }
 printf("NULL.\n");

}
void DisplayProduct(PNODE Head)
{
 printf("Product of all digits in each element: ");
 while (Head!=NULL)
 {
  int iDigit=0;  //We want to find digits of number in each node separately so everytime while loop begins iDigit should be set to 0. 
  int iMul=1;   //We want to find multiplication of digits of number in each node separately so everytime while loop begins iMul should be set to 1.  
  int No=Head->Data; //For convenience we will store number in each node in a variable No, so we need not to use Head->Data everytime.
  while (No!=0)
  {
   iDigit=No%10;
   if (iDigit!=0) //We want to ignore 0.
   {
    iMul=iMul*iDigit;
   }
   No=No/10;
  }
  printf("%d ",iMul);
  Head=Head->Next;
 }
}

int main()
{
 PNODE First=NULL;
 InsertFirst(&First,41);
 InsertFirst(&First,32);
 InsertFirst(&First,20);
 InsertFirst(&First,11);
 Display(First);
 DisplayProduct(First);
 return 0;
}