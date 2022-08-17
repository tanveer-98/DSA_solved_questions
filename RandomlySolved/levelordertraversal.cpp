#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left,*right;
};
Node* newnode(int data){
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->right=temp->left=NULL;
    return temp;
}
Node* createTree(int arr[],Node* root,int i,int n){
    if(i<n)
        {
        Node* temp=newnode(arr[i]);
        root=temp;
        root->left=createTree(arr,root->left,2*i+1,n);
        root->right=createTree(arr,root->right,2*i+2,n);
    }
    return root;
}

void printgivenlevel(Node*root ,int i)
{

    if(root==NULL)
        return ;
    if(i==1)
        cout<<root->data<<" ";
    else if(i>1)
    {
        printgivenlevel(root->left,i-1);
        printgivenlevel(root->right,i-1);
    }
}
void printLevelorder(Node *root)
{

    int h=4;
    int i;
    for(int i=1;i<=h;i++){
    printgivenlevel(root,i);
    cout<<endl;}
}
int main()
{

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node*root=createTree(arr,root,0,n);
    printLevelorder(root);
    return 0;

}
