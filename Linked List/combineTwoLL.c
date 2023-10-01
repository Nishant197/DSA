// Combining two linked lists 
/* example linked list 1 : l1->l2->l3
			linked list 2: r1->r2->r3
	after combinig 
	l1 -> r1->l2->r2->l3->r3
	no additional nodes can be used
	
*/

#include<stdio.h>
#include<stdlib.h>
struct link{
	int data;
	struct link *next;
};
typedef struct link node;
node *push(node *head,int nm)
{
	node *e;
	e=(node*)malloc(sizeof(e));
	e->data=nm;
	e->next=NULL;
	if(head==NULL)
	{
		head=e;
		return head;
	}
	else
	{
		e->next=head;
		return e;
	}
}
void display(node *h)
{
	if(h==NULL)
		printf("Empty link");
	else
	{
		while(h!=NULL)
		{
			printf("%d ",h->data);
			h=h->next;
		}
	}
	printf("\n");
}
node *combine(node *a,node *b)
{
    if(a==NULL || b==NULL)
        return a;
    else
    {
        node *h1=a,*h2,*h=a;
        while(a!=NULL && b!=NULL)
        {
            h1=a->next;
            h2=b->next;
            a->next=b;
            if(h1!=NULL)
            	b->next=h1;
            a=h1;
            b=h2;
        }
        return h;
    }
}
int main()
{
	node *a,*b;
    a=NULL;
    b=NULL;
	int f=0,ch,num;
	while(f==0)
	{
		printf("enter 1 for push in a,2 for push in b ,3 display ,4 for combine and exit ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter number ");
				scanf("%d",&num);
				a=push(a,num);
				break;
			case 2:
				printf("enter number ");
				scanf("%d",&num);
				b=push(b,num);
				break;
			case 3:
				display(a);
				display(b);
				break;
			case 4:
				a=combine(a,b);
                display(a);
				//break;
			case 5:
				f=1;
				break;
		}
	}
}