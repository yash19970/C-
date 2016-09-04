#include<iostream>
#include<list>
using namespace std;
class Graph
{
	int V;
	list<int> *adj;

public:
	Graph(int V){
		this->V = V;
		adj = new list<int> [V];
	}
	void addEdge(int src, int dest){
		adj[src].push_back(dest);
	}

	// DFS Starts
	void DfsUtil(int v, bool visited[]){
		visited[v] = true;
		cout<< v << " ";

		list<int>::iterator i;
		for( i = adj[v].begin(); i != adj[v].end(); ++i){
			if(! visited[*i]){
				DfsUtil(*i, visited);
			}
		}

	}
	void DFS(int v){
		bool *visited =  new bool [V];

		for(int i = 0; i<V; i++){
			visited[i] =false;
		}
		DfsUtil(v, visited);
	}
	// Dfs ends	
};
int main(int argc, char const *argv[])
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	g.DFS(2);
	return 0;
}