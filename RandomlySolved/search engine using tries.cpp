//question

/*
Let us see how search engines work. Consider the following simple auto complete feature. When you type some characters in the text bar, the engine
automatically gives best matching options among it's database. Your job is simple. Given an incomplete search text, output the best search result.

Each entry in engine's database has a priority factor attached to it. We consider a result / search suggestion best if it has maximum
weight and completes the given incomplete search query. For each query in the input, print the maximum weight of the string in the database,
that completes the given incomplete search string. In case no such string exists, print -1.




*/

#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    TrieNode** children;//pointer to array of nodes
    int weight;
    TrieNode()
    {
        children=new TrieNode*[26];
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        weight=0;
    }
};
void insertstring(TrieNode* root,string s,int weight)
{
    if(s.empty())
        return;
    TrieNode *child;
    int index=s[0]-'a';
    if(root->children[index]!=NULL)
    {
         child=root->children[index];
    }
    else
    {
        child=new TrieNode();
        root->children[index]=child;
    }
    if(child->weight==0)
        child->weight=weight;
    else child->weight=(child->weight>weight)?child->weight:weight;
    insertstring(child,s.substr(1),weight);

}
int query(string qstring,TrieNode* root)
{
    TrieNode *current=root;
    int qstring_length=qstring.length();
    int bestweight=-1;
    for(int i=0;i<qstring_length;i++)
    {
        int index=qstring[i]-'a';
        if(current->children[index]!=NULL)
        {
            current=current->children[index];
            bestweight=current->weight;
        }
        else
        {
            return -1;
        }
    }
    return bestweight;

}
int main()
{
    int n,q;
    cin>>n>>q;
    vector<string> vec(n);
    int weights[n];
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        cin>>weights[i];
    }
    TrieNode * root= new TrieNode();

    for(int i=0;i<n;i++)
    {
        insertstring(root,vec[i],weights[i]);
    }


    while(q--)
    {
        string qstring;
        cin>>qstring;
        int ans=query(qstring,root);
        cout<<ans<<"\n";
    }
    return 0;
}
