#include<stdio.h>
#include "cLinkedList.h"
int A[15];

removeFibb(struct Node *CSTART,int A)
{

}


int main()
{
    struct Node *CSTART = NULL;
    int a = 0,b = 1,c,i;
    A[0]= a;
    A[1]= b;
    for(i=2;i<15;i++)
    {
        c = a+b;
        A[i]=c;
        a = b;
        b = c;

    }
    InsBeg(&CSTART,25);
    InsBeg(&CSTART,23);
    InsBeg(&CSTART,22);
    InsBeg(&CSTART,21);
    InsBeg(&CSTART,18);
    InsBeg(&CSTART,16);
    InsBeg(&CSTART,14);
    InsBeg(&CSTART,8);
    InsBeg(&CSTART,6);
    InsBeg(&CSTART,5);
    InsBeg(&CSTART,3);
    InsBeg(&CSTART,2);
    Traversal(CSTART);
    removeFibb(&CSTART);
    Traversal(CSTART);
    return 0;

}


