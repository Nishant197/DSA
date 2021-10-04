#include<stdio.h>
#include "linkedList.h"

int LinearSearch(struct node **list,int x)
{
    struct node *temp;
    temp = (*list);
    while (temp!=NULL)
    {
        if (temp->info == x)
            return 1;
        else
            temp = temp ->next;
    }
}

int main()
{
    int n,k;
    struct node *START;
    START = NULL;
    InsBeg(&START,500);
    InsBeg(&START,400);
    InsBeg(&START,300);
    InsBeg(&START,200);
    InsBeg(&START,100);
    printf("Enter Element to Search : ");
    scanf("%d",&k);
    n = LinearSearch(&START,k);
    if (n == 1)
        printf("Element Found");
    else
        printf("Element Not Found");
    return 0;
}
