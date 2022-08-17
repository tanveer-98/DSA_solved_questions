#include<iostream>
using namespace std;
#define tnd tnode*
struct tnode*
{
    tnd left;
    tnd right;
    int data;
};
tnd newnode(int data)
{

    tnd newnode =(tnd)malloc(sizeof(tnode));
    newnode->data=data;
    newnode->right=newnode->left=NULL;
    return newnode
}
Node* createTree(int arr[],Node* root,int i,int n)
{
    if(i<n)
    {
        Node* temp=newnode(arr[i]);
        root=temp;
        root->left=createTree(arr,root->left,2*i+1,n);
        root->right=createTree(arr,root->right,2*i+2,n);
    }
        return root;
}
void printinorderstack(Node *root)
{
    tnd ptr;

     if(ptr==NULL)
     {
         cout<<"the tree is empty"<<endl;
         return 0;
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
             if(stack_empty())
                return;
             ptr=pop_stack();
         }
         cout<<ptr->info;
         ptr=ptr->rchild;
     }
}
int main()
{
     int arr[]={1,2,3,4,5,6,7,8};
     int n=sizeof(arr)/sizeof(arr[0]);
     print
    return 0;
}
