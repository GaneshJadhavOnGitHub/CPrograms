/*
Consider below code snippet to solve given problem statements.
Write a program which return second maximum element from singly linear
linked list.
Function Prototype :
int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240
*/
/*
Algorithm
1.Find Maximum number in the Given List.
2.Create Second List which contains all elements of Given List except Maximum number.
3.Find Maximum from Second List which is Second Maximum of Given List.
4.Return that Second Maximum.
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
typedef struct node** PPNODE;

int iMaximum=INT_MIN;
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
int Maximum(PNODE Head)
{
 int iMax=INT_MIN;
 while (Head!=NULL)
 {
  if ((Head->Data)>iMax)
  {
   iMax=Head->Data;
  }
  Head=Head->Next;
 }
 return iMax;
}
int CreateSecondListAndReturnMax(PNODE Head, PNODE Second)
{
 int SecMax=0;
 while (Head!=NULL)
 {
  if ((Head->Data)!=iMaximum)
  {
   InsertFirst(&Second,Head->Data);
  }
  Head=Head->Next;
 }
 //Display(Second);
 SecMax=Maximum(Second);
 return SecMax;
}

int SecMaximum(PNODE Head)
{
 int iSecMax=0;
 PNODE Second=NULL;
 iMaximum=Maximum(Head);
 iSecMax=CreateSecondListAndReturnMax(Head,Second);
 return iSecMax;
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
 iRet=SecMaximum(First);
 printf("Second Maximum number is %d.",iRet);
 return 0;
}