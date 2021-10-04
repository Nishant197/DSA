#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coef;
    int exp;
    struct node *next;
};
struct node *GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
/**************(INSERTION)**************/
void InsBeg(struct node **list,int c,int e)
{
    struct node *temp;
    temp=GetNode();
    temp->coef=c;
    temp->exp=e;
    temp->next=*list;
    *list=temp;
}
void InsEnd(struct node **list,int c,int e)
{
    struct node *temp,*p;
    temp=*list;
    if (*list==NULL)
        InsBeg(&(*list),c,e);
    else
    {
        while (temp->next!=NULL)
            temp=temp->next;
        p=GetNode();
        p->coef=c;
        p->exp=e;
        p->next=NULL;
        temp->next=p;
    }
}
void Traverse(struct node *list)
{
    struct node *t;
    t=list;
    while (t!=NULL)
    {
      printf("%dX%d\t",t->coef,t->exp);
      t=t->next;
    }
}
AddPolynomial(struct node *Poly1,struct node *Poly2)
{
    struct node *p,*q,*Poly3;
    p=Poly1;
    q=Poly2;
    Poly3=NULL;
    while (p!=NULL && q!=NULL)
    {
        if (p->exp == q->exp)
        {
            InsEnd(&Poly3,p->coef+q->coef,p->exp);
            p=p->next;
            q=q->next;
        }
        else if (p->exp > q->exp)
        {
            InsEnd(&Poly3,p->coef,p->exp);
            p=p->next;
        }
        else
        {
            InsEnd(&Poly3,q->coef,q->exp);
            q=q->next;
        }
    }
    while (p!=NULL)
    {
       InsEnd(&Poly3,p->coef,p->exp);
        p=p->next;
    }
    while (q!=NULL)
    {
       InsEnd(&Poly3,q->coef,q->exp);
        q=q->next;
    }
    return Poly3;
}

void main ()
{
    struct node *Poly1,*Poly2;
    struct node *Poly3=NULL;
    Poly1=NULL;
    Poly2=NULL;
    InsEnd(&Poly1,3,8);
    InsEnd(&Poly1,5,7);
    InsEnd(&Poly1,-2,6);
    InsEnd(&Poly1,8,4);
    printf("First Equation is :\n");
    Traverse(Poly1);
    InsEnd(&Poly2,4,7);
    InsEnd(&Poly2,5,6);
    InsEnd(&Poly2,-1,3);
    InsEnd(&Poly2,7,2);
    InsEnd(&Poly2,-3,0);
    printf("\nSecond Equation is :\n");
    Traverse(Poly2);
    Poly3=AddPolynomial(Poly1,Poly2);
    printf("\nResultant Addition :\n");
    Traverse(Poly3);

}


