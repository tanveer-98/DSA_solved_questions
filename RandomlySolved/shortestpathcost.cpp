#include <iostream>
#include <vector>
#include <queue>
#define ll long long int
using namespace std;

// data structure to store graph edges
struct Edge {
	int source, dest, weight;
};

// class to represent a graph object
class Graph
{
public:
	// construct a vector of vectors to represent an adjacency list
	vector<vector<int>> adjList;

	// Graph Constructor
	Graph(vector<Edge> const &edges, int x, int N)
	{
		// resize the vector to 3*N elements of type vector<int>
		adjList.resize(3*N);

		// add edges to the undirected graph
		for (auto &edge: edges)
		{
			int v = edge.source;
			int u = edge.dest;
			int weight = edge.weight;

			// create two new vertices v+N and v+2*N if the weight
			// of edge is 3x. Also, split the edge (v, u) into (v, v+N),
			// (v+N, v+2N) and (v+2N, u) each having weight x
			if (weight == 3*x)
			{
				adjList[v].push_back(v + N);
				adjList[v + N].push_back(v + 2 * N);
				adjList[v + 2 * N].push_back(u);
			}

			// create one new vertex v+N if the weight of the edge
			// is 2x. Also split the edge (v, u) into (v, v+N),
			// (v+N, u) each having weight x
			else if (weight == 2*x)
			{
				adjList[v].push_back(v + N);
				adjList[v + N].push_back(u);
			}

			// no splitting is needed if edge weight is 1x
			else
				adjList[v].push_back(u);
		}
	}
};

// Recursive function to print path of given vertex v from
// the source vertex
void printPath(vector<int> const &predecessor, int v, int& cost, int N)
{
	if (v < 0)
		return;

	printPath(predecessor, predecessor[v], cost, N);
	cost++;

	// consider only original nodes present in the graph
	if (v < N)
		cout << v << " ";
}

// Perform BFS on graph starting from vertex source
void BFS(Graph const& graph, int source, int dest, int N)
{
	// stores vertex is discovered in BFS traversal or not
	vector<bool> discovered(3*N, false);

	// mark source vertex as discovered
	discovered[source] = true;

	// predecessor[] stores predecessor information. It is used
	// to trace least cost path from destination back to source.
	vector<int> predecessor(3*N, -1);

	// create a queue used to do BFS and push source vertex
	// into the queue
	queue<int> q;
	q.push(source);

	// run till queue is not empty
	while (!q.empty())
	{
		// pop front node from queue and print it
		int curr = q.front();
		q.pop();

		// if destination vertex is reached
		if (curr == dest)
		{
			int cost = -1;
			cout << "Least cost path between " << source << " and " <<
				dest << " is ";
				 printPath(predecessor, dest, cost, N);
			cout << "having cost " << cost;
		}

		// do for every adjacent edge of current vertex
		for (int v : graph.adjList[curr])
		{
			if (!discovered[v])
			{
				// mark it discovered and push it into queue
				discovered[v] = true;
				q.push(v);

				// set curr as predecessor of vertex v
				predecessor[v] = curr;
			}
		}
	}
}

// Least cost path in weighted digraph using BFS
int main()
{


	 int n,queries;
    cin>>n>>queries;
    vector<Edge> edges;
    for(int i=1;i<=n-1;i++)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        Edge edge;
        edge.source=x;
        edge.dest=y;
        edge.weight=w;
        edges.push_back(edge);
    }
	// create a graph from edges
	Graph graph(edges, 1, n);

	// given source and destination vertex
	int source = 0, dest = 3;

	// Do BFS traversal from given source
	BFS(graph, source, dest, n);

	return 0;
}
