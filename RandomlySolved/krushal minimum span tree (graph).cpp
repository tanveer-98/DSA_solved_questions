#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:

    int src,dest,weight;
};
bool compare(Edge A,Edge B)
{
    return A.weight<B.weight;
}
int getparent(int src,int parent[])
{

    if(parent[src]==src)
        return src;
    else return getparent(parent[src],parent);
    }

Edge* kruskals(Edge *edgelist,int vertices,int edges)
{
    sort(edgelist,edgelist+edges,compare);
    Edge* output=new Edge[vertices-1];//since the output has n-1 vertices so we need to store the data for n-1 verticces
    int parent[vertices];
    //set the parents to itself
    for(int i=0;i<vertices;i++)
    {
        parent[i]=i;
    }
    int cnt=0;
    int i=0;
    while(cnt<vertices-1)
    {
        //check the topmost parent of v1 and v2 where v1 and v2 are vertices of current edge
        Edge edge=edgelist[i];
        int srcparent=getparent(edge.src,parent);
        int destparent=getparent(edge.dest,parent);
        if(srcparent!=destparent)
        {
            output[cnt]=edge;
            cnt++;
            parent[destparent]=srcparent;

        }
        i++;

    }
    return output;

}
int main()
{

   int vertices, edges;
   cin>>vertices>>edges;
   Edge * edgelist= new Edge[edges];
   for(int i=0;i<edges;i++)
   {
       int u,v,w;
       cin>>u>>v>>w;
       edgelist[i].src=u;
       edgelist[i].dest=v;
       edgelist[i].weight=w;
   }
   /*
    for(int i=0;i<edges;i++)
   {
       if(edgelist[i].src<edgelist[i].dest)
       cout<<edgelist[i].src<<" "<<edgelist[i].dest<<"\n";
       else  cout<<edgelist[i].dest<<" "<<edgelist[i].src<<"\n";

   }
   */
   Edge* output=kruskals(edgelist,vertices,edges);
   //printing the output final edges

   for(int i=0;i<vertices-1;i++)
   {
       if(output[i].src<output[i].dest)
       cout<<output[i].src<<" "<<output[i].dest<<"\n";
       else  cout<<output[i].dest<<" "<<output[i].src<<"\n";

   }

   return 0;
}
