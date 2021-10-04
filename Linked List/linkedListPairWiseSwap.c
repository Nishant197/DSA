#include <stdio.h>
#include "linkedList.h"

 void swap(struct node **list,int c)
 {
     int i,temp;
     struct node *p, *q;
     p = (*list);
     c = c/2;
     for (i=1;i<=c;i++)
     {
         q = p->next;
         temp = p->info;
         p->info = q->info;
         q->info = temp;
         p = q->next;
     }
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
     count = CountNode(&START);
     swap(&START,count);
     printf("\nSwapped Node\n");
     Traverse(&START);
 }
