
#include<iostream>
using namespace std;
#define nd tnode*
struct tnode{
 nd left;
 nd right;
 int data;
};

nd newnode(int data)
{
    nd newnode=(nd)malloc(sizeof(tnode));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
nd insertLevelOrder(int arr[],nd root,int i,int n)
{

    if(i<n)
    {
        nd temp=newnode(arr[i]);
        root=temp;
        root->left=insertLevelOrder(arr,root->left,2*i+1,n);
        root->right=insertLevelOrder(arr,root->right,2*i+2,n);
    }
    return root;
}
int searchtree(nd root,int key)
{
    if(root==NULL)
        return false;
    if(root->data=key)
        return true;

    bool one=searchtree(root->left,key);
    bool two=searchtree(root->right,key);

    return one||two;
}
int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    nd root = insertLevelOrder(arr,root,0,n);
    int key;
    cout<<"enter the element you want to search"<<endl;
    cin>>key;
    int found=searchtree(root,key);
    if(found)
        cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}
