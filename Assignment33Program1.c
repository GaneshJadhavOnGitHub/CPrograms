/*
Consider below code snippet to solve given problem statement.
#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
int Data;
node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE Head , int no )
{
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));
newn->Next = NULL;
newn->Data = no;
if (*Head == NULL)
{
*Head = newn;
}
else
{
newn -> Next = *Head;
*Head = newn;
}
}
int main()
{
PNODE First = NULL;
InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 21);
InsertFirst(&First, 11);
// Call all functions for below problem statements.
return 0;
}

Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :
int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3
*/

/*
 For explaination refer diagram in the notebook.
 PNODE First=NULL;
 Pass address of First (&First) to functions which update list.
 We need pointer to PNODE to store address of First i.e. we need PPNODE.
 Pass First to functions which do not updates list.
*/
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1) //Padding is OFF

struct node  //Self referntial structure. Pointer of the structure inside the same structure.
{
 int Data;
 struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;   //Pointer to NODE i.e. It holds address of Node.
typedef struct node** PPNODE; //Pointer to PNODE i.e. It holds address of PNODE. 
/*
Function Name : InsertFirst
Input         : PPNODE , Integer
Output        : Void
Description   : Insert the given number at the first position in the linked list.
Author        : Ganesh Kamalakar Jadhav.
Date          : 17 April 2021
*/
/*
Note: We are passing (&First) i.e. address of First to InsertFirst function. 
First is of type PNODE that means we are passing address of PNODE , So we require a pointer to PNODE 
to store that address and pointer to PNODE is PPNODE therefore here we have used variable(Head) of type PPNODE.
*/
void InsertFirst(PPNODE Head, int No)
{
 PNODE newn=NULL;
 newn = (PNODE)malloc(sizeof(NODE));
 newn->Next=NULL;
 newn->Data=No;

 if (*Head==NULL) //Head is pointing to First so if First==NULL i.e. List is empty.
 {
  *Head=newn;  // make newn as First i.e *Head.
 }
 else         //If list contains some nodes.
 {
  newn->Next=*Head; //newn of Next is pointing to NULL Make it point to First(*Head) i.e. newn->Next=*Head
  *Head=newn; //make newn as First i.e *Head. 
 }
}
/*
Function Name : Display
Input         : PNODE
Output        : Void
Description   : It displays the linked list.
Author        : Ganesh Kamalakar Jadhav.
Date          : 17 April 2021
*/

void Display(PNODE Head)
{
 while (Head!=NULL)
 {
  printf("|%d|-> ",Head->Data);
  Head=Head->Next;
 }
 printf("NULL\n");
}

/*
Function Name : SearchFirstOccurance
Input         : PNODE ,Interger
Output        : Integer
Description   : It returns the first occurance of the given number in the linked list.
Author        : Ganesh Kamalakar Jadhav.
Date          : 17 April 2021
*/

int SearchFirstOccurance(PNODE Head, int No)
{
 int iCnt=0;
 while (Head!=NULL)
 {
  iCnt++;
  if (Head->Data==No)
  {
   return iCnt;
  }
  Head=Head->Next;
 }
 if (Head==NULL)
 {
  return -1;
 }
}
int main()
{
 PNODE First = NULL;
 int iRet=0;
 int No=0;
 InsertFirst(&First,70);
 InsertFirst(&First,30);
 InsertFirst(&First,50);
 InsertFirst(&First,40);
 InsertFirst(&First,30);
 InsertFirst(&First,20);
 InsertFirst(&First,10);
 Display(First);
 printf("Enter number whose first occurance is to be found:\n");
 scanf("%d",&No);
 iRet=SearchFirstOccurance(First,No);
 if (iRet!=-1)
 {
  printf("\nFirst Occurance of %d in Linked List is at position %d.\n",No,iRet);
 }
 else
 {
  printf("%d is not present in the linked list.",No);
 }
 return 0;
}