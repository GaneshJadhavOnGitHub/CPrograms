/*
Write a program which search last occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :
int SearchLastOcc( PNODE Head, int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 6
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
 newn = (PNODE)malloc(sizeof(NODE));
 newn->Data=No;
 newn->Next=NULL;
 if (*Head==NULL)
 {
  *Head=newn;
 }
 else
 {
  newn->Next=*Head; //newn of Next contains First
  *Head=newn;
 }
}
 void Display(PNODE Head)
 {
  while (Head!=NULL)
  {
   printf("|%d|-> ",Head->Data);
   Head=Head->Next;
  }
  printf("NULL");
 }
 int Count(PNODE Head)
 {
  int iCnt=0;
  while (Head!=NULL)
  {
   iCnt++;
   Head=Head->Next;
  }
 return iCnt;
 }
 int SearchLastOccurance(PNODE Head,int No)
 {
  int iCnt=0;
  int position=0;
  while (Head!=NULL)
  {
   iCnt++;
   if (Head->Data==No)
   {
    position=iCnt;
   }
   Head=Head->Next;
  }
  if (Head==NULL)
  {
   if (position==0)
   {
    return -1;
   }
   else
   {
    return position;
   }
  }
 }
int main()
{
 int No=0;
 int iRet=0;
 int iNoOfNodes=0;
 PNODE First=NULL;
 InsertFirst(&First,70);
 InsertFirst(&First,30);
 InsertFirst(&First,50);
 InsertFirst(&First,40);
 InsertFirst(&First,30);
 InsertFirst(&First,20);
 InsertFirst(&First,10);
 Display(First);
 iNoOfNodes=Count(First);
 //printf("\nThe Linked List contains %d nodes.\n",iNoOfNodes);
 printf("\nEnter the number whose last occurance is to be found.\n");
 scanf("%d",&No);
 iRet=SearchLastOccurance(First,No);
 if (iRet!=-1)
 {
  printf("Last occurance of %d is at location : %d",No,iRet);
 }
 else 
 {
  printf("Number is not present.");
 } 
 
 return 0;
}