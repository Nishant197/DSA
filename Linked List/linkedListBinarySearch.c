#include<stdio.h>
#include "linkedList.h"

int BinarySearch(struct node **list,int key)
{
    struct node *temp,*mid;
    temp = (*list);
    mid = FindMid(&list);
    if (temp!=NULL)
    {
        if (mid->info == key)
            return mid;
        else if (key <mid->info)
        {
            mid ->next = NULL;
            BinarySearch(&temp,key);
        }
        else
        {
            temp = mid->next;
            BinarySearch(&temp,key);
        }
    }
    else
        return NULL;
}

int main()
{
    int n,key;
    struct node *START;
    START = NULL;
    InsBeg(&START,500);
    InsBeg(&START,400);
    InsBeg(&START,300);
    InsBeg(&START,200);
    InsBeg(&START,100);
    printf("Enter Element to Search : ");
    scanf("%d",&key);
    Sort(&START);
    n = BinarySearch(&START,key);
    printf("%d",n);
    return 0;
}
