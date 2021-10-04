/************** (Linked List Basic Function) ***************/
struct node
{
    int info;

    struct node *next;
};

GetNode()   // Used to Create a New Node.
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    return temp;
}

void FreeNode(struct node *p)   // Used in Delete a Node.
{
    free(p);
}

void Traverse(struct node **list)   // Print the Linked List
{
    struct node *temp;
    temp = *list;
    if (temp == NULL)
        printf("Empty Linked List");
    else
    {
        printf("Linked List : ");
        while (temp!=NULL)
        {
            printf("%d\t",temp->info);
            temp = temp ->next;
        }

    }

}
/*************************************************************/
/***************** (Insertion in Linked List) ******************/
void InsBeg(struct node **list,int x)  // Insertion in Beginning.
{
    struct node *temp;
    temp = GetNode();
    temp->info = x;
    temp->next=(*list);
    (*list)=temp;
}
void InsEnd(struct node **list,int x)
{
    struct node *temp,*p;
    temp=*list;
    if (*list==NULL)
        InsBeg(&(*list),x);
    else
    {
        while (temp->next!=NULL)
            temp=temp->next;

        p=GetNode();
        p->info=x;
        p->next=NULL;
        temp->next=p;
    }
}
void InsAft(struct node **list,int y,int x) // Insertion after Given Value
{
    struct node *temp,*p;
    temp = (*list);
    while (temp!=NULL)
    {
        if (temp->info == y)
            break;
        else
            temp = temp->next;
    }
    p = GetNode();
    p->info = x;
    p->next = temp->next;
    temp->next = p;
}
void InsAFT(struct node **p, char x)
{
    struct node *q;
    q=GetNode();
    q->info=x;
    q->next=(*p)->next;
    (*p)->next=q;
}
/*************************************************************/
/***************** (Deletion in Linked List) ******************/
int DelBeg(struct node **list)
{
     int x;
     struct node *temp;
     if ((*list) == NULL)
         printf("Void Deletion");
     else
     {
         temp=(*list);
         (*list)=(*list)->next;
         x=temp->info;
         FreeNode(temp);
         return x;
     }
}
int DelEnd (struct node **list)
{
    int x;
    struct node *p,*q;
    p = (*list);
    q = NULL;
    if (list ==NULL)
    {
        printf("Void Deletion\n");
        return;
    }
    else
    {
        while (p->next!= NULL)
        {
            q = p;
            p = p->next;
        }
        q = q->next;
        x = p->info;
        FreeNode(p);
        return x;
    }
}
/*************************************************************/
int CountNode(struct node **list)
 {
     int c=0;
     struct node *temp;
     temp = (*list);
     while(temp!=NULL)
     {
        c++;
        temp = temp->next;
     }
     return c;
 }
void Sort(struct node **START)
{
    int n, i, j, temp;
    struct node *p;
    p = *START;
    n = CountNode(*START);
    for(i=0; i<n; i++)
    {
        p = *START;
        for(j=0; j<n-i-1; j++)
        {
            if(p->info > p->next->info)
            {
                temp = p->info;
                p->info = p->next->info;
                p->next->info = temp;
            }
            p = p->next;
        }
    }
}
FindMid(struct node **list)
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
