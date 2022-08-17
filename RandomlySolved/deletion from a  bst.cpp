
#include<iostream>
using namespace std;
#define tnd tnode*
struct tnode
{
    int data;
    tnode*left,*right;

};
tnd newnode(int data)
{

    tnd newnode=(tnd)malloc(sizeof(tnode));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
tnd createBST(tnd root,int key)
{
    if (root==NULL)
    {
        root=newnode(key);
    }
    else if(root->data>key)
        root->left=createBST(root->left,key);
    else if(root->data<key)
        root->right=createBST(root->right,key);
    else cout<<"duplicate key";
    return root;
}
void inorder(tnd root)
{

    if(root!=NULL)
    {

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }
}
tnd deletebst(tnd root,int key);
int main()
{

    int arr[]={5,6,2,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    tnd root = NULL;
    for(int i=0;i<n;i++)
    root=createBST(root,arr[i]);
    cout<<"before deletion"<<endl;
    inorder(root);
    cout<<endl;
    root=deletebst(root,6);
    cout<<"after deletion"<<endl;
    inorder(root);
    return 0;
}
tnd findMin(tnd root)
{
    if(root->left==NULL)
        return root;
    else root=root->left;
}
tnd deletebst(tnd root,int key)
{

    if(root==NULL)
    {

        cout<<"the tree is empty or key not found"<<endl;
        return root;
    }
    if(key<root->data)
    root->left=deletebst(root->left,key);
    else if(key>root->data)
    root->right=deletebst(root->right,key);
    else
    {//key is found
            if(root->left==NULL&&root->right==NULL)
            {
                tnd temp=root->right;
                free(root);
                return temp;

            }
            else if(root->right==NULL)
            {
                tnd temp=root->left;
                free(root);
                return temp;

            }
            else if(root->left==NULL)
            {
                tnd temp=root->right;
                free(root);
                return temp;

            }
            else
            {
                //two child
                tnd temp=findMin(root->right);
                root->data=temp->data;
                root->right=deletebst(root->right,temp->data);

            }
    }
    return root;
}

