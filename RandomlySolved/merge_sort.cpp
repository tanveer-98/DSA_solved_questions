
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
tnd createBST()
int main()
{

    return 0;
}
