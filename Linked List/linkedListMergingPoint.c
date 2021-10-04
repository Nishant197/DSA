#include<stdio.h>
#include "linkedList.h"

MergingPoint(struct node *START1,struct node *START2)
{
    int i,c1,c2,c;
    struct node *P,*Q;
    P = START1;
    Q = START2;
    c1 = CountNode(&START1);
    c2 = CountNode(&START2);
    if (c1<c2)
    {
        c = c2-c1;
        for (i=1;i<=c;i++)
            Q = Q->next;
    }
    else if (c1>c2)
    {
        c = c1-c2;
        for (i=1;i<=c;i++)
            P = P->next;
    }
    while(P!=Q)
    {
        P = P->next;
        Q = Q->next;
    }
    printf("\nStarting Point : %d",P->info);
}

int main()
{
    int n;
    struct node *START1,*START2,*P,*Q;
    START1 = NULL;
    START2 = NULL;
    InsBeg(&START1,900);
    InsBeg(&START1,800);
    InsBeg(&START1,700);
    InsBeg(&START1,600);
    InsBeg(&START1,500);
    InsBeg(&START1,400);
    InsBeg(&START1,300);
    InsBeg(&START1,200);
    InsBeg(&START1,100);
    printf("1st Linked List :");
    Traverse(&START1);
    InsBeg(&START2,80);
    InsBeg(&START2,60);
    InsBeg(&START2,40);
    InsBeg(&START2,20);
    InsBeg(&START2,10);
    P = START1;
    while (P->info!=300)
        P = P->next;
    Q = START2;
    while (Q->next!=NULL)
        Q = Q->next;
    Q ->next = P;
    printf("\n2nd Linked List :");
    Traverse(&START2);
    MergingPoint(START1,START2);
    return 0;

}



