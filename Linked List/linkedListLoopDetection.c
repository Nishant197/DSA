#include<stdio.h>
#include "linkedList.h"
#define True 1
#define False 0

LoopDetection(struct node *list)
{
    int c=0;
    struct node *P,*Q;
    P = list;//Slow
    Q = list;//Fast
    while (Q!=NULL && Q->next!=NULL)
    {
        P = P->next;
        Q = Q->next;
        Q = Q->next;
        if (P == Q)
        {
            printf("\nLoop Detected");
            break;
        }
    }
    /**do{
        Q =Q ->next;
        c++;
    }while (P!=Q);
    printf("\nLength of Loop : %d",c);
    **/
    P = list;
    while (P!=Q)
    {
        P = P->next;
        Q = Q->next;
    }
    printf("\nStarting Position is %d",P->info);
    return 0;
}

int main()
{
    int n;
    struct node *START,*p,*q;
    START = NULL;
    InsBeg(&START,900);
    InsBeg(&START,800);
    InsBeg(&START,700);
    InsBeg(&START,600);
    InsBeg(&START,500);
    InsBeg(&START,400);
    InsBeg(&START,300);
    InsBeg(&START,200);
    InsBeg(&START,100);
    printf("Linked List :");
    Traverse(&START);
    p = START;
    while (p->info!=400)
        p=p->next;
    printf("\nReached %d\n",p->info);
    q = START;
    while (q->next!=NULL)
        q=q->next;
    printf("Reached %d\n",q->info);
    q->next = p;
    LoopDetection(START);
    return 0;
}


