#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
  Node* left;
  Node* right;

};
Node* newnode(int data)
{
    Node* node=(Node*)malloc(sizeof(Node));
    node->data=data;
    node->left=node->right=NULL;
    return (node);
}
Node* insertLevelOrder(int arr[],Node* root,int i,int n)
{

    if(i<n)
    {
        Node* temp=newnode(arr[i]);
        root=temp;
        root->left=insertLevelOrder(arr,root->left,2*i+1,n);
        root->right=insertLevelOrder(arr,root->right,2*i+2,n);
    }
    return root;
}
int height(struct Node* root)
{
    if(root==NULL)
        return 0;
    int left=height(root->left);
    int right=height(root->right);

    if(left>right)
        return left+1;
    else return right+1;
}
int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root = insertLevelOrder(arr,root,0,n);
    int he=height(root);
    cout<<"height "<<he<<endl;
    //inorder(root);
    return 0;
}
