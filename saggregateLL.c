#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *start=NULL;
struct node* createnode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}

void insert()
{
struct node *temp;
temp=createnode();
printf("Enter the data:");
scanf("%d",&temp->data);
temp->next=NULL;
if(start==NULL)
    {
    start=temp;
    }
else
    {
    struct node *t=start;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
    }
}

void traverse()
{
    struct node *t=start;
    while(t !=NULL)
    {
        printf("%d",t->data);
        t=t->next;
    }
}
void sagregate()
{
    struct node *temp=start;
    int count[3]={0,0,0};
    while(temp!=NULL)
    {
        count[temp->data]+=1;
        temp=temp->next;
    }
    int i=0;
    struct node *ptr=start;
    while(ptr!=NULL)
    {
        if(count[i]==0)
        {
            i++;
        }
        else
        {
            ptr->data=i;
            count[i]--;
            ptr=ptr->next;
        }
    }
}
int main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    traverse();
    printf("\n");
    sagregate();
    traverse();
    return 0;
}
