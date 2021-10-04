#include <stdio.h>
#include <math.h>
#include "linkedList.h"

 void ReverseTraverse(struct node *temp)
{
    if (temp == NULL)
        return;
    ReverseTraverse(temp->next);
    printf("%d  ",temp->info);
}

 void main()
 {
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
     printf("\nReversed  Node\n");
     ReverseTraverse(&START);
 }

