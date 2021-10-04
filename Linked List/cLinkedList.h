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

 /**********INSERTION AT BEGINING******************************************/
 void InsBeg(struct Node **cSTART, int x)
 {
     struct Node *p, *q;
     p = GetNode();
     p->info = x;
     if(*cSTART == NULL)
     {
         *cSTART = p;
     }
     else
     {
         q = (*cSTART)->next;
         p->next = q;
     }
     (*cSTART)->next = p;
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

 /**************DELETION AT BEGINNING*************************************/
 int DelBeg(struct Node **cSTART)
 {
     struct Node *p;
     int x;
     if(*cSTART == NULL)
     {
         printf("Void Deletion");
     }
     else
     {
         p = (*cSTART)->next;
         if((*cSTART)->next == cSTART)
         {
             *cSTART = NULL;
         }
         else
         {
             (*cSTART)->next = p->next;
         }
         x = p->info;
         FreeNode(p);
         return x;
     }
 }

int DelEnd(struct Node **CSTART)
 {
    struct Node *p, *q;
    int x;
    p=(*CSTART);
    while (p->next!=(*CSTART))
        p=p->next;
    p->next=(*CSTART)->next;
    q=(*CSTART);
    (*CSTART)=p;
    x=q->info;
    free(q);
    return x;
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

 int Sum(struct Node *cSTART)
 {
     struct Node *temp = cSTART->next;
     int sum = 0;
     while(temp!=cSTART)
     {
         sum = sum + temp->info;
         temp = temp->next;
     }
     sum +=temp->info;
    return sum;
 }
