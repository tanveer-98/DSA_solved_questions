#include<stdio.h>
#include<stdlib.h>

struct node{
        int value;
        struct node* next;
};
struct node* head=NULL;
struct node* endptr=NULL;
void insert(int);
void search(int value);
void print();

int main()
{

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
   search(5);
    print();
    return 0;
}
void insert(int value)
{
    if(head==NULL)
        {
            struct node* temp1=(struct node*)malloc(sizeof(struct node));
            temp1->value=value;
            temp1->next=head;
            head=temp1;
            endptr=temp1;
        }
    else
        {
           struct node*temp= head;
           while(temp->next!=NULL)
               temp=temp->next;

               struct node* tempnew=(struct node*)malloc(sizeof(struct node));
           tempnew->value=value;
           tempnew->next=temp->next;
           temp->next=tempnew;
           endptr=tempnew;
        }
}
void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->value);
        temp=temp->next;
    }
}
void search(int data)
{
    struct node*vtemp=head;

    while(vtemp->value!=data);
         vtemp=vtemp->next;

    if(vtemp->next!=NULL)
    {
        vtemp->next=head;
        head=vtemp->next;

        struct node*temp2=head;

        while(temp2->next!=head)
        temp2=temp2->next;

        temp2->next=endptr;
    }


}
