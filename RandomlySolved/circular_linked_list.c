#include<iostream>
typedef struct node* node;
struct node
{
    int data;
    node next;
};
node head=NULL;
void addatbegin()
{
    int data;
    cout<<"enter the data for the first node"<<endl;
    cin>>data;
    node newnode=(node)malloc(sizeof(struct node));
    head=newnode;
    newnode->data=data;
    newnode->next=NULL;
}
void addatfront()
{
    int data;
    cout<<"enter the value for the next node"<<endl;
    cin>>data;

}

int main()
{





    return 0;
}
