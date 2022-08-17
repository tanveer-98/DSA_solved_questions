#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node* head;
void print();
void Insert(int);

int main()
{

    head=NULL;
    printf("how many numbers.\n");


    int i,n,x;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the number.\n");
        scanf("%d",&x);
        Insert(x);
        print();
    }


    return 0;


}
void Insert(int x)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}

void print()
{
   struct node* temp=head;
   while(temp!=NULL)
   {
      printf("%d",temp->data);
      temp=temp->next;
   }
   printf("\n");
}



