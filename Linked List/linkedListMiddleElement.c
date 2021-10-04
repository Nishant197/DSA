#include<stdio.h>
#include "linkedList.h"

int FindMiddle(struct node **list)
{
    struct node *temp1,*temp2;
    temp1 = (*list);
    temp2 = (*list);
    temp2 = temp2->next;
    while (temp2!=NULL && temp2->next!=NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    return temp1->info;
}

int main()
{
    int n;
    struct node *START;
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
    printf("\nMiddle Element : ");
    n=FindMiddle(&START);
    printf("%d\n",n);
    return 0;
}

