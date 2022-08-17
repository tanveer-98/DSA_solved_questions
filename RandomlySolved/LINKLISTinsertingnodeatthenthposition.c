#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node* head;
void print();
void insert(int data,int n);

int main()
{
    head=NULL ;
    insert(1,1);
    insert(2,2);
    insert(3,3);

    print();
    return 0;
}
void insert(int data,int n)
{
    int i;

    struct node* temp1= (struct node*)malloc(sizeof(struct node));
    temp1->data=data;
    temp1->next=NULL;

    if(n==1)
    {
       temp1->next=head;
       head=temp1;
       return;
    }
    struct node*temp2=head;

    for(i=1;i<n-2;i++)
    temp2=temp2->next;

    temp1->next=temp2->next;
    temp2->next=temp1;

}

void print()
{
   struct node* temp=head;
   while(temp!=NULL)
   {
      printf("%d,",temp->data);
      temp=temp->next;
   }
   printf("\n");
}



