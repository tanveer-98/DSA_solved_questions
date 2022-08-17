#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <climits>
#define ll long long int
using namespace std;

// data structure to store graph edges
struct Edge {
	int src, dest, weight;
};

// class to represent a graph object
class Graph
{
	public:
	// construct a vector of vectors of Edge to represent an adjacency list
	vector<vector<Edge>> adjList;

	// Constructor
	Graph(vector<Edge> const &edges, int N)
	{
		// resize the vector to N elements of type vector<Edge>
		adjList.resize(N);

		// add edges to the directed graph
		for (auto &edge: edges)
		{
			int src = edge.src;
			int dest = edge.dest;
			int weight = edge.weight;

			adjList[src].push_back({src, dest, weight});
			adjList[dest].push_back({dest, src, weight});
		}
	}
};

// BFS Node
struct Node
{
	// current vertex number and cost of current path
	int vertex, weight;

	// set of nodes visited so far in current path
	set<int> s;
};

// Perform BFS on graph g starting from vertex v
int modifiedBFS(Graph const &g, int src, int k)
{
	// create a queue used to do BFS
	queue<Node> q;

	// add source vertex to set and push it into the queue
	set<int> vertices;
	vertices.insert(0);
	q.push({src, 0, vertices});

	// stores maximum-cost of path from source
	int maxCost = INT_MIN;

	// run till queue is not empty
	while (!q.empty())
	{
		// pop front node from queue
		Node node = q.front();
		q.pop();

		int v = node.vertex;
		int cost = node.weight;
		vertices = node.s;

		// if destination is reached and BFS depth is equal to m
		// update minimum cost calculated so far
		if (cost > k)
			maxCost = max(maxCost, cost);

		// do for every adjacent edge of v
		for (Edge edge : g.adjList[v])
		{
			// check for cycle
			if (vertices.find(edge.dest) == vertices.end())
			{
				// add current node into the path
				set<int> s = vertices;
				s.insert(edge.dest);

				// push every vertex (discovered or undiscovered) into
				// the queue with cost equal to (cost of parent + weight
				// of current edge)
				q.push( {edge.dest, cost + edge.weight, s} );
			}
		}
	}

	// return max-cost
	return maxCost;
}

// main function
int main()
{
    int n,queries
    cin>>n>>queries;
    vector<Edge> edges;
    for(int i=1;i<=n-1;i++)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        point Edge;
        Edge->src=x;
        Edge->dest=y;
        Edge->weight=w;
        edges.push_back(Edge);
    }

	// create a graph from edges
	Graph g(edges, n);

	int src = 0;
	int cost = 50;

	// Do modified BFS traversal from source vertex src
	int maxCost = modifiedBFS(g, src, cost);

	if (maxCost != INT_MIN)
		cout << maxCost;
	else
		cout << "All paths from source have their costs < " << cost;

	return 0;
}
