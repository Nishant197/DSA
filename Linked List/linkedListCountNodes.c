#include <stdio.h>
#include "linkedList.h"

int CountNode1(struct node **list)
 {
     int c=0;
     struct node *temp;
     temp = (*list);
     while(temp!=NULL)
     {
        c++;
        temp = temp->next;
     }
     return c;
 }

int main()
{
    int c;
    struct node *START;
    START=NULL;
    int count;
    InsBeg(&START,600);
    InsBeg(&START,500);
    InsBeg(&START,400);
    InsBeg(&START,300);
    InsBeg(&START,200);
    InsBeg(&START,100);
    printf("Original Node\n");
    Traverse(&START);
    c = CountNode1(&START);
    printf("\nNo of Nodes : %d",c);
}
