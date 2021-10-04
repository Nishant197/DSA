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

Merge(struct node **LIST1,struct node **LIST2)
{
    struct node *LIST3=NULL;
    struct node *p,*q;
    p=LIST1;
    q=LIST2;
    while (p!=NULL && q!=NULL)
    {
        if (p->info < q->info)
        {
            InsEnd(&LIST3,p->info);
            p=p->next;
        }
        else
        {
            InsEnd(&LIST3,q->info);
            q=q->next;
        }
    }
    while (p!=NULL)
    {
        InsEnd(&LIST3,p->info);
        p=p->next;
    }
    while (q!=NULL)
    {
        InsEnd(&LIST3,q->info);
        q=q->next;
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
    AscendingInsertion(&LIST1,50);
    AscendingInsertion(&LIST1,10);
    AscendingInsertion(&LIST1,20);
    Traverse(&LIST1);
    AscendingInsertion(&LIST2,35);
    AscendingInsertion(&LIST2,45);
    AscendingInsertion(&LIST2,55);
    AscendingInsertion(&LIST2,5);
    AscendingInsertion(&LIST2,15);
    AscendingInsertion(&LIST2,25);
    printf("\n");
    Traverse(&LIST2);
    printf("\n");
    LIST3=Merge(LIST1,LIST2);
    Traverse(&LIST3);
}

