#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"

AscendingInsertion(struct node **START,int x)
{
    struct node *p,*q;
    p=(*START);
    q=NULL;
    while (p!=NULL && x >= p->info)
    {
        q=p;
        p=p->next;
    }
    if (q==NULL)
        InsBeg(&(*START),x);
    else
        InsAft(&(*START),q->info,x);
}


Difference(struct node **LIST1,struct node **LIST2)
{
    struct node *LIST3=NULL;
    struct node *p,*q;
    p=LIST1;
    q=LIST2;
    while (p!=NULL && q!=NULL)
    {
        if (p->info == q->info)
        {
            p=p->next;
            q=q->next;
        }
        else if (p->info < q->info)
        {
            InsEnd(&LIST3,p->info);
            p=p->next;
        }
        else
            q=q->next;
    }
    while (p!=NULL)
    {
        InsEnd(&LIST3,p->info);
        p=p->next;
    }
    return LIST3;
}

void main ()
{
    struct node *LIST1,*LIST2,*LIST3;
    LIST1=NULL;
    LIST2=NULL;
    LIST3=NULL;
    AscendingInsertion(&LIST1,30);
    AscendingInsertion(&LIST1,40);
    AscendingInsertion(&LIST1,45);
    AscendingInsertion(&LIST1,10);
    AscendingInsertion(&LIST1,20);
    printf("List 1:\t ");
    Traverse(&LIST1);
    AscendingInsertion(&LIST2,35);
    AscendingInsertion(&LIST2,40);
    AscendingInsertion(&LIST2,55);
    AscendingInsertion(&LIST2,5);
    AscendingInsertion(&LIST2,10);
    AscendingInsertion(&LIST2,25);
    printf("\nList 2:\t ");
    Traverse(&LIST2);
    printf("\nDifference :");
    LIST3=Difference(LIST1,LIST2);
    Traverse(&LIST3);
}


