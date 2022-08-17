
#include<stdio.h>
#include<stdlib.h>
typedef struct node* Node;
struct node
{
    int data;
     Node next;
};
Node reverse(Node start)
{
   Node prev,next,ptr;
   prev=NULL;
   ptr=start;
   while(ptr!=NULL)
   {
       next=ptr->next;
       ptr->next=prev;
       prev=ptr;
       ptr=next;

   }
   start=prev;
   return start;


}
Node  createnode()
{
  Node temp;
  temp=(Node)malloc(sizeof(struct node));
  temp->next=NULL;
  return temp;
}
Node addat(Node start,int pos)
{
    Node ptr;
    Node temp=createnode();
    ptr=start;

    if(pos==1)
    {
        temp->next=start;
        start=temp;
        return start;

    }
    for(i=1;i<pos-1)

}


void printnode(Node start)
{
  Node p=start;
  printf("\n The elements of the list are:\n");

  while(p!=NULL)
  {
    printf("%d ",p->data);
    p=p->next;
  }
}
int main()
{
    Node start=NULL;
    printf("enter the number of nodes you want to create:\n");
    int n;
    scanf("%d",&n);

    while(n>0)
    {
        Node p;
        int value;
        printf("enter the value you want to enter:\n");
        scanf("%d",&value);
        Node temp=createnode();
        if(start==NULL)
        {
            start=temp;
            temp->next=NULL;
            temp->data=value;
        }
        else
        {
            p=start;
            while(p->next!=NULL)
            p=p->next;
            p->next=temp;
            temp->data=value;
            temp->next=NULL;

        }


        n--;
    }
    int pos;
    printf("enter the position you want the element to take place of/n");
    scanf("%d",&pos);
    start=addat(start,pos);
   // start=reverse(start);
    printnode(start);
    return 0;
}
