
#include<stdio.h>
#include<stdlib.h>
typedef struct node* Node;
struct node
{
    int data;
     Node next;
};
Node  createnode()
{
  Node temp;
  temp=(Node)malloc(sizeof(struct node));
  temp->next=NULL;
  return temp;
}
void reverse(Node start){
 Node p=start;

}
void printnode(Node start)
{
  Node p=start;
  printf("\n The elements of the list are:\n");

  while(p!=NULL)
  {
    printf("%d,",p->data);
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

    printnode(start);
    return 0;
}
