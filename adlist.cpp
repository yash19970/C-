#include<iostream>
#include<cstdlib>
using namespace std;
struct AdjListNode
{	
	int dest;
	struct AdjListNode* next;
};
struct AdjList
{
		struct AdjListNode* head;
};
class Graph
{
	private:
		struct AdjList* array;
		int V;
	public:
		Graph(int V){
			this->V = V;
			array = new AdjList [V];
			for(int i=0;i<V;i++){
				array[i].head = NULL;
			}
		}
		AdjListNode* newAdjListNode(int dest){
			AdjListNode* newNode = new AdjListNode;
			newNode->dest = dest;
			newNode->next = NULL;
			return newNode;
		}
		void addEdge(int src, int dest){
			AdjListNode* newNode = newAdjListNode(dest);
			newNode->next = array[src].head;
			array[src].head = newNode;

			newNode = newAdjListNode(src);
			newNode->next = array[dest].head;
			array[dest].head = newNode;
		}
		/*void printg(){
			for(int  i =0 ;i <V;i++){
				AdjListNode* p = array[i].head;
				cout<<"Adj List of Vertex "<<i<<endl;
				while(p){
					cout<<p->dest;
					p = p->next;
				} cout<<endl;
			}
		}*/
			void printGraph()
        {
            int v;
            for (v = 0; v < V; +n+v)
            {
                AdjListNode* pCrawl = array[v].head;
                cout<<"\n Adjacency list of vertex "<<v<<"\n head ";
                while (pCrawl)
                {
                    cout<<"-> "<<pCrawl->dest;
                    pCrawl = pCrawl->next;
                }
                cout<<endl;
            }
        }
};
int main(){
	Graph g(5);
	int src,dest,ch; //5 vertices	
	while(ch!= -1){
		cout<<"Enter Nodes between Edges:";
		cin>>src>>dest;
		g.addEdge(src,dest);
		cout<<"Enter -1 to exit: "<<endl;
		cin>>ch;
	}
	g.printGraph();
	return 0;

}