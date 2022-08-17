#include<iostream>
using namespace std;
#define sbst bst*
struct bst
{
    sbst lchild;
    sbst rchild;
    int  data;
};
sbst newnode(int data)
{
    sbst newnode=(sbst)malloc(sizeof(struct bst));
    newnode->lchild=NULL;
    newnode->rchild=NULL;
    newnode->data=data;
    return newnode;
}
sbst insertinBst(sbst root,int key)
{
    if(root==NULL)
    {
        root=newnode(key);
    }
    else if(key<root->data)
        root->lchild=insertinBst(root->lchild,key);
    else if(key>root->data)
        root->rchild=insertinBst(root->rchild,key);
    else
        cout<<"the data is duplicate"<<endl;

    return root;
}
void inorder(sbst root)
{

    if(root!=NULL)
    {

        inorder(root->lchild);
        cout<<root->data<<" ";
        inorder(root->rchild);

    }
}
int main()
{
    int arr[]={5,6,2,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
     sbst root = NULL;
    for(int i=0;i<n;i++)
    root=insertinBst(root,arr[i]);
    inorder(root);
    return 0;
}
