#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> adj;
public:
    Graph(int V);//contructor declaration

    void addEdge(int v,int w);
    void BFS(int s);
};
Graph::Graph(int V)
{
  this->V=V;

}
int main()
{





}
