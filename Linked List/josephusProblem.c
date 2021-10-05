#include <stdio.h>
struct Node
{
    int info;
    struct Node *next;
};

/*********GET NODE**********************************************************/
struct Node *GetNode()
{
    struct Node *p;
    p = (struct Node*)malloc(sizeof(struct Node));
    return p;
}
/*************FREE NODE****************************************************/
void FreeNode(struct Node *p)
{
    free(p);
}

/*****************INSERTION AT END***************************************/
void InsEnd(struct Node **cSTART, int x)
{
    struct Node *p, *q;
    p = GetNode();
    p->info = x;
    if((*cSTART) != NULL)
    {
        q = (*cSTART)->next;
        p->next = q;
    }
    else
    {
        *cSTART = p;
    }
    (*cSTART)->next = p;
    *cSTART = p;
}


int josephusProblem(struct Node **CSTART,int k)
{
    struct Node *P,*Q;
    int count,x;
    P = (*CSTART)->next;
    printf("\nDeleted Nodes :\n");
    while (P->next!=P)
    {
        count = 1;
        while(count!=k-1)
        {
            count++;
            P = P->next;
        }
        Q = P;
        P = P->next;
        P = P->next;
        x = DelAft(Q);
        printf("%d\t",x);
    }
    return P->info;
}
int DelAft(struct Node *p)
{
    struct Node *q;
    int x;
    q = p->next;
    p->next=q->next;
    x=q->info;
    FreeNode(q);
    return x;

}
/****************TRAVERSAL***********************************************/
void Traversal(struct Node *cSTART)
{
    struct Node *temp = cSTART->next;
    while(temp!=cSTART)
    {
        printf("%d\t", temp->info);
        temp = temp->next;
    }
    printf("%d\t", temp->info);

}

int main()
{
    struct Node *CSTART = NULL;
    int i,ans;
    for (i=1; i<101; i++)
    {
        InsEnd(&CSTART,i);
    }
    printf("Linked list :");
    Traversal(CSTART);
    ans = josephusProblem(&CSTART,12);
    printf("\nJosephus Problem = %d",ans);
    return 0;


}
