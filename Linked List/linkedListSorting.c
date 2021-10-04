#include<stdio.h>
#include "linkedList.h"

int CountNode1(struct node **START)
{
    int c=0;
    struct node *temp;
    temp = START;
    while(temp!=NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}

void Sort(struct node **START)
{
    int n, i, j, temp;
    struct node *p;
    p = *START;
    n = CountNode1(*START);
    for(i=0; i<n; i++)
    {
        p = *START;
        for(j=0; j<n-i-1; j++)
        {
            if(p->info > p->next->info)
            {
                temp = p->info;
                p->info = p->next->info;
                p->next->info = temp;
            }
            p = p->next;
        }
    }
}

int main(void)
{
    struct Node *p,*START;
    START = NULL;
    InsBeg(&START,10);
    InsBeg(&START,1);
    InsBeg(&START,33);
    InsBeg(&START,33);
    InsBeg(&START,99);
    InsBeg(&START,100);
    InsBeg(&START,122);
    InsBeg(&START,2);
    printf("Original Linked List : \n");
    Traverse(&START);
    Sort(&START);
    printf("\nSorted Linked List : \n");
    Traverse(&START);
}


