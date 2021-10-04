// Linked List Palindrome Check.
#include<stdio.h>
#include "linkedList.h"

PalindromeCheck(struct node *list)
{
    int c;
    struct node *P,*Q,*R;
    P = list;
    Q = list;
    R = list;
    Q = FindMiddle(&R);



}
int FindMiddle(struct node **list)
{
    struct node *temp1,*temp2;
    temp1 = (*list);
    temp2 = (*list);
    temp2 = temp2->next;
    while (temp2!=NULL && temp2->next!=NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    return temp1;
}

int main()
{
    int n;
    struct node *START1;
    START1 = NULL;
    InsBeg(&START1,900);
    InsBeg(&START1,800);
    InsBeg(&START1,700);
    InsBeg(&START1,600);
    InsBeg(&START1,500);
    InsBeg(&START1,400);
    InsBeg(&START1,300);
    InsBeg(&START1,200);
    InsBeg(&START1,100);
    PalindromeCheck(START);
    return 0;

}



