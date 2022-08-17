#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>> > adj(20);
void dijkstra(int source,vector<int> &sdistance,vector<int> &predecessor,int vertices)
{
    sdistance.assign(vertices,INT_MAX);
    predecessor.assign(vertices,-1);
    vector<bool> u(vertices,false);

    sdistance[source]=0;
    for(int  i=0;i<vertices;i++)
    {
        int v=-1;//none vertices chosen till now
        //this for loop below chooses the vertex with the shortest distsnce from the i
        for(int j=0;j<vertices;j++)
        {
            if(!u[j]&&(v==-1||sdistance[j]<sdistance[v]))//checks which neighbour has the shortest length ,if a new neighbour with shorter length is found then v is updated.
                v=j;
        }
        if(sdistance[v]==INT_MAX)
            break;
        u[v]=true;
        for(auto edge: adj[v])
        {
            int to=edge.first;
            int len=edge.second;
            if(sdistance[to]>sdistance[v]+len)
            {

                sdistance[to]=sdistance[v]+len;
                predecessor[to]=v;
            }
        }

    }

}
int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    for(int i=0;i<edges;i++)
    {
        int src,dest,w;
        cin>>src>>dest>>w;
        adj[src].push_back(make_pair(dest,w));
        adj[dest].push_back(make_pair(src,w));
    }
    vector<int> sdistance;
    vector<int> predecessor;
    dijkstra(0,sdistance,predecessor,vertices);
    for(int i=0;i<vertices;i++)
    {
        cout<<"shortest distance from 0 to "<<i<<" is " <<sdistance[i]<<" \n";
    }
    cout<<"\n";


    return 0;
}
