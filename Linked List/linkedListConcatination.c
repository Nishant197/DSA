#include <stdio.h>
#include "linkedList.h"

void linkedListConc(struct node **START1,struct node **START2)
{
    struct node *temp = (*START1);
    if (temp == NULL)
        return START2;
    else
    {
        while (temp->next != NULL)
            temp = temp ->next;
        temp ->next = (*START2);
        return START1;
    }
}
int main()
{
    struct node *START1 = NULL;
    struct node *START2 = NULL;
    InsBeg(&START1,100);
    InsBeg(&START1,200);
    InsBeg(&START1,300);
    InsBeg(&START1,400);
    printf("First Linked List :\t");
    Traverse(&START1);
    InsBeg(&START2,500);
    InsBeg(&START2,600);
    InsBeg(&START2,700);
    InsBeg(&START2,800);
    printf("\nSecond Linked List :\t");
    Traverse(&START2);
    linkedListConc(&START1,&START2);
    printf("\nCombined Linked List :\t");
    Traverse(&START1);
}
