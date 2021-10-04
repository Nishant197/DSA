#include <stdio.h>
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
    if (q!=NULL)
        InsAft(&(*START),q->info,x);

    else
        InsBeg(&(*START),x);
 }
DelDuplicate(struct node **START)
{
    struct node *p = (*START);
    struct node *temp;
    if (p == NULL)
        return;
    while (p->next !=NULL)
    {
        if (p->info == p->next->info)
        {
            temp = p->next->next;
            FreeNode(p->next);
            p->next = temp;
        }
        else
            p=p->next;
    }
    return START;
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
    printf("\nAfter Removing Duplicates from Linked List :\t");
    Traverse(&START);
    DelDuplicate(&START);
    printf("\nBefore Removing Duplicates from Linked List :\t");
    Traverse(&START);

}


