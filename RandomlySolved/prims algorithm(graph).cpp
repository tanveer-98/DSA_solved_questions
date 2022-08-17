#include<bits/stdc++.h>
using namespace std;
class AdjacencyList
{
    public:
    vector<int> Alist;
    int weight;
};
class Primarray{

    public:
    int vertex,parent,weight;
};
Edge* primsalgo(int vertices,int edge,AdjacencyList*edgelist)
{
    vector<int>visited;
    vector<int>notvisited;
    for(int i=0;i<vertices;i++)
    {
        notvisted.push_back(i);
    }
    Primarray* details=new Primarray[vertices];
    for(int i=0;i<vertices;i++)
    {
        details[i].vertex=i;
        details[i].parent=-1;
        details[i].weight=INT_MAX;
    }
    details[0].weight=0;




}
int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    Edge* edgelist=new Edge[edges];
    for(int i=0;i<edges;i++)
    {
        int src,dest,weight;
        cin>>src>>dest>>weight;
        edgelist[i].src=src;
        edgelist[i].dest=dest;
        edgelist[i].weight=weight;
    }
    Edge* output=primsalgo(vertices,edges,edgelist);




    return 0;
}
