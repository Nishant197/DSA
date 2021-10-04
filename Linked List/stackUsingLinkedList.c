// Stack Using Linked List
#include<stdio.h>
#include<math.h>
#include "linkedList.h"

PUSH(struct node **TOP,int x)
{
    InsBeg(&(*TOP),x);
}
int POP(struct node **TOP)
{
    int x;
    if ((*TOP) == NULL)
    {
        printf("Stack Underflows");
        exit(1);
    }
    else
    {
       x = DelBeg(&(*TOP));
       return x;
    }
}
Empty(struct node **TOP)
{
    struct node *P = (*TOP);
    if ((*TOP)==NULL)
        return 1;
    else
        return 0;
}

int main()
{
    struct node *TOP;
    int x;
    TOP = NULL;
    PUSH(&TOP,100);
    PUSH(&TOP,200);
    PUSH(&TOP,300);
    PUSH(&TOP,400);
    PUSH(&TOP,500);
    PUSH(&TOP,600);
    Traverse(&TOP);
    x = POP(&TOP);
    printf("\nDeleted Item = %d",x);
    x = POP(&TOP);
    printf("\nDeleted Item = %d",x);
    x = POP(&TOP);
    printf("\nDeleted Item = %d",x);
    x = POP(&TOP);
    printf("\nDeleted Item = %d",x);
    x = POP(&TOP);
    printf("\nDeleted Item = %d",x);
    x = POP(&TOP);
    printf("\nDeleted Item = %d\n",x);
    x = POP(&TOP);
    return 0;
}
