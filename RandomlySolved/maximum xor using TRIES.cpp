//most of the XOR problems use tries
//basic approach take n^2
//nlog(max_number_possible) for tries for queries
#include<bits/stdc++.h>
using namespace std;
class trieNode{
public:
    trieNode* left;
    trieNode*right;


};
void insertTrienode(int n,trieNode* head)
{
    trieNode* curr=head;
    //this for loop determines the ith bit
    for(int i=31;i>=0;i--)
    {
        int b=(n>>i)&1;
        if(b==0)//then the ith bit is 0
        {
            if(!curr->left)//if left is empty
            {
                curr->left=new trieNode();
            }
            curr=curr->left;
        }
        else
        {
            if(!curr->right)
            {
                curr->right=new trieNode();
            }
            curr=curr->right;
        }
    }
}
int findMaxXorPair(trieNode* head,int*arr,int n)
{
    int max_xor=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int value=arr[i];
        trieNode* curr=head;
        int curr_xor=0;
        for(int j=31;j>=0;j--)
        {
            int b=(value>>j)&1;
            if(b==0)//ith bit is zero
            {
                if(curr->right)
                {
                    curr_xor+=(pow(2,j));
                    curr=curr->right;
                }
                else
                {
                    curr=curr->left;//nothing is adder in pow of 2 as it's 0 anyways
                }
            }
            else
            {
                if(curr->left)
                {
                    curr_xor+=(pow(2,j));
                    curr=curr->left;
                }
                else
                {
                    curr=curr->right;
                }
            }

        }
        if(curr_xor>max_xor)
            max_xor=curr_xor;
    }
    return max_xor;

}
int main()
{
    int arr[6]={8,12,1,2,5,10};
    trieNode* head=new trieNode();
    for(int i=0;i<6;i++)
    insertTrienode(arr[i],head);
    int maxxor=findMaxXorPair(head,arr,6);
    cout<<"maxxor "<<maxxor;

    return 0;
}
