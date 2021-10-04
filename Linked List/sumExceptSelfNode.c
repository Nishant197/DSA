#include<stdio.h>
#include "cLinkedList.h"

sumExcept(struct Node **CSTART)
{
    struct Node *temp = (*CSTART)->next;
    int total;
    total = Sum(temp);
    printf("\nSum => %d\n",total);
    while(temp!=(*CSTART))
     {
         temp->info = total - temp->info;
         temp = temp->next;
     }
     temp->info = total - temp->info;
     Traversal(temp);
}

int main()
{
    struct Node *CSTART = NULL;
    InsBeg(&CSTART,600);
    InsBeg(&CSTART,500);
    InsBeg(&CSTART,400);
    InsBeg(&CSTART,300);
    InsBeg(&CSTART,200);
    InsBeg(&CSTART,100);
    Traversal(CSTART);
    sumExcept(&CSTART);
    return 0;

}

