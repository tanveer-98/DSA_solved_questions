#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;
void delete(int n);
void insert(int data);
void print();

int main()
{
    head=NULL;
    int choice;
    do{
        printf("enter which option do you want .\n");
        printf("1.insert a node at the beginning.\n");
        printf("2.delete a node.\n");
        printf("3.print the list.\n");
        printf("4.exit.\n");
        scanf("%d",&choice);
        switch(choice)
         {
             case 1:
                     {
                         int n;
                         printf("enter the number of nodes you want to make.\n");
                         scanf("%d",&n);
                         while(n--)
                            {
                                int value;
                                printf("enter the value.\n");
                                scanf("%d",&value);
                                insert(value);
                            }
                     }
                          break;

             case 2:
                     {
                        int positon;
                        printf("enter the node which you want to delete.\n");
                        scanf("%d",&positon);
                        delete(positon);
                     }
                        break;

             case 3:
                     print();
                     break;
             case 4:
                     printf("thank you.\n");
                     return 0;
                     break;
             default:
                     printf("wrong choice.\n");
         }

    }while(choice!=4);


    return 0;
}
void insert(int data)
{
      struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    head=temp;

}

void delete(int n)
{
  struct node* temp1=head;
  if(n==1)
  {
        head=temp1->next;
        free(temp1);
        return ;
  }
  for(int i=1;i<n-1;i++)
       temp1=temp1->next;
   struct node* temp2=temp1->next;
   temp1->next=temp2->next;
   free(temp2);

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
