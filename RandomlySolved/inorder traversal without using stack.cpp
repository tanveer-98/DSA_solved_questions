#include<iostream>
using namespace std;
#define tnd tnode*
struct tnode
{
    tnd lchild;
    tnd rchild;
    int data;
};
struct stck
{
    tnd pointer;
    struct stck* link;
}*top=NULL;

void push_stack(tnd pointer)
{
    struct stck*tmp=(struct stck*)malloc(sizeof(struct stck));
    tmp->pointer=pointer;
    tmp->link=top;
    top=tmp;
}
tnd pop_stack()
{
    tnd tmp;
    tmp=top->pointer;
    struct stck* tmp2=top;
    top=tmp2->link;
    free(tmp2);
    return tmp ;
}
tnd newnode(int data)
{

    tnd newnode =(tnd)malloc(sizeof(tnode));
    newnode->data=data;
    newnode->rchild=newnode->lchild=NULL;
    return newnode;
}
tnd createTree(int arr[],tnd root,int i,int n)
{
    if(i<n)
    {
        tnd temp=newnode(arr[i]);
        root=temp;
        root->lchild=createTree(arr,root->lchild,2*i+1,n);
        root->rchild=createTree(arr,root->rchild,2*i+2,n);
    }
        return root;
}
void printinorderstack(tnd root)
{
    tnd ptr=root;

     if(ptr==NULL)
     {
         cout<<"the tree is empty"<<endl;
         return;
     }
     while(1)
     {

         while(ptr->lchild!=NULL)
         {
             push_stack(ptr);
             ptr=ptr->lchild;
         }
         while(ptr->rchild==NULL)
         {
             cout<<ptr->data;
             if(top==NULL)
                return;
             ptr=pop_stack();
         }
         cout<<ptr->data;
         ptr=ptr->rchild;
     }
}
void printgivenlevel(tnd root ,int i)
{

    if(root==NULL)
        return ;
    if(i==1)
        cout<<root->data<<" ";
    else if(i>1)
    {
        printgivenlevel(root->lchild,i-1);
        printgivenlevel(root->rchild,i-1);
    }
}
void printLevelorder(tnd root)
{

    int h=4;
    int i;
    for(int i=1;i<=h;i++)
        {
    printgivenlevel(root,i);
    }
}
int main()
{
     int arr[]={1,2,3};
     int n=sizeof(arr)/sizeof(arr[0]);
     tnd root=createTree(arr,root,0,n);
     cout<<"level order using recursion"<<endl;
     printLevelorder(root);
     cout<<"inorder using stack"<<endl;
     printinorderstack(root);

    return 0;
}
