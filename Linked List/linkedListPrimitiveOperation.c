// Program for Linear Linked List Primitive operations
#include<stdio.h>
#include "linkedList.h"

void main()
{
    struct node *START;
    START=NULL;
    int x;
    InsBeg(&START,300);
    InsBeg(&START,200);
    InsBeg(&START,100);
    InsEnd(&START,400);
    InsEnd(&START,500);
    InsEnd(&START,600);
    InsAft(&START,100,150);
    InsAft(&START,200,250);
    InsAft(&START,300,350);
    InsEnd(&START,700);
    Traverse(&START);
    printf("\n%d\n",DelBeg(&START));
    printf("%d\n",DelEnd(&START));
    Traverse(&START);
}
