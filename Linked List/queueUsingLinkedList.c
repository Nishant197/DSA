// Queue Using Linked List
#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"
Empty(struct node **REAR,struct node **FRONT)
{
    if ((*FRONT)==NULL &&(*REAR)==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Enqueue(struct node **REAR,struct node **FRONT,int x)
{
    if (REAR==NULL)
    {
        InsBeg(&(*REAR),x);
        FRONT = REAR;
    }
    InsAFT(&(*REAR),x);
    (*REAR)=(*REAR)->next;

}
int Dequeue(struct node **REAR,struct node **FRONT)
{
    int x;
    if ((*FRONT) == NULL)
    {
        printf("Queue Underflows");
        exit(1);
    }
    x = DelBeg(&(*FRONT));
    if ((*FRONT)==NULL)
        REAR = NULL;
    return x;
}

int main()
{
    struct node *FRONT,*REAR;
    int x;
    FRONT = NULL;
    REAR = NULL;
    Enqueue(&REAR,&FRONT,100);
    Enqueue(&REAR,&FRONT,200);
    Enqueue(&REAR,&FRONT,300);
    Enqueue(&REAR,&FRONT,400);
    Enqueue(&REAR,&FRONT,500);
    Enqueue(&REAR,&FRONT,600);
    x = Dequeue(&REAR,&FRONT);
    printf("\nDeleted Item = %d",x);
    x = Dequeue(&REAR,&FRONT);
    printf("\nDeleted Item = %d",x);
    x = Dequeue(&REAR,&FRONT);
    printf("\nDeleted Item = %d",x);
    x = Dequeue(&REAR,&FRONT);
    printf("\nDeleted Item = %d",x);
    x = Dequeue(&REAR,&FRONT);
    printf("\nDeleted Item = %d",x);
    x = Dequeue(&REAR,&FRONT);
    printf("\nDeleted Item = %d\n",x);
    x = Dequeue(&REAR,&FRONT);
    return 0;
}

