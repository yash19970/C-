#include<iostream>
#include<list>
using namespace std;
class Graph{
	int V;
	list<int> *adj;
	public:
		Graph(int V){
			this->V = V;
			adj = new list<int> [V];
		}
		void addEdge(int src, int dest){
			adj[src].push_back(dest); // ad dest to src list.
		}
		void BFS(int s){
			// mark as visited
			bool* visited = new bool [V]; // visited array.
			for(int i=0; i<V; i++){
				visited[i] = false;
			}
			// add to queue
			list<int> queue;
			visited[s] = true;
			queue.push_back(s);
				// iterator created
			list<int>:: iterator i;
			
			while(!queue.empty()){
				// display the vertex from queue and display
				s = queue.front();
				cout<< s << " ";
				queue.pop_front();
				// adjacent vertices, and push them
				for(i = adj[s].begin(); i!= adj[s].end(); ++i){
					if(!visited[*i]){
						visited[*i] = true;
						queue.push_back(*i);
					}
				}
			}

		}
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
	g.BFS(2);
	return 0;
}