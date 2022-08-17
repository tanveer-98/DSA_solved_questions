#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node * next;

};
void push(struct node** head_ref,int new_data)
{
    struct node* new_node=new node;
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
bool detectloop(struct node * head)
{

    unordered_set<node*> s;
    while(head!=NULL)
    {
        if(s.find(head)!=s.end())//if the node is already present in hashmap
        {
            return true;
        }
        s.insert(head);
        head=head->next;
    }
    return false;
}
int main()
{
    struct node* head=NULL;
    push(&head,20);
    push(&head,4);
    push(&head,15);
    push(&head,10);

    head->next->next->next=head->next;
    bool loop=detectloop(head);

    if(loop)
        cout<<"YEs";
    else cout <<"NO";
    return 0;


}
