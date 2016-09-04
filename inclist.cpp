// representation of graph using Adj List, using #include<list>
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
		void addEdge(int src,int dest){
			adj[src].push_back(dest); //add dest to src
			adj[dest].push_back(src);
		}
		void printg(){
			for(int i = adj.begin(); i !=  adj.end(); ++i) cout << *i << " ";
  				 cout << endl;
		}

};
int main(int argc, char const *argv[])
{
	Graph g(5);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    //g.printg();
	return 0;
}