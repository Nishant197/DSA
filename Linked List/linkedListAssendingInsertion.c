#include<stdio.h>
#include "linkedList.h"
 void AssendingInsertion(struct node **START,int x)
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

int main()
{
    struct node *START = NULL;
    AssendingInsertion(&START,100);
    AssendingInsertion(&START,100);
    AssendingInsertion(&START,200);
    AssendingInsertion(&START,200);
    AssendingInsertion(&START,500);
    AssendingInsertion(&START,300);
    AssendingInsertion(&START,300);
    printf("Assending Linked List :\t");
    Traverse(&START);

}

