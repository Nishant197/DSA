#include<stdio.h>
#include "cLinkedList.h"

int main()
{
    struct node *CSTART = NULL;
    InsBeg(&CSTART,100);
    InsBeg(&CSTART,200);
    InsBeg(&CSTART,300);
    InsBeg(&CSTART,400);
    InsBeg(&CSTART,500);
    Traverse(CSTART);
}
