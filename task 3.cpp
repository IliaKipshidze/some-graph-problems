#include<iostream>
#include<list>
using namespace std;
class Graph {
	int V;
	int time;
	list<int>* d;
	list<int>* f;
	list<int>* adj;
	list<int>* adjT;
public:
	  Graph(int V);
	  void addEdge(char u, char p);
	  void dfsviz(int v, int* visited, int* d, int* f, list<int>* ad);
	  void DFS();
};
Graph::Graph(int V) {
	this->V = V;
	adj = new list<int>[V];
}
void Graph::addEdge(char u, char p) {
	int x = u - 97;
	int y = p - 97;
	adj[x].push_back(y);
}
void Graph::dfsviz(int v, int* visited, int* d, int* f, list<int>* ad) {
	visited[v] = 1;
	time++;
	d[v] = time;
	for (auto i = ad[v].begin(); i != ad[v].end(); i++) {
		if (visited[*i] == 0) {
			dfsviz(*i, visited, d, f, ad);
		}
	}
	visited[v] = 1;
	time++;
	f[v] = time;
}
void Graph::DFS() {
	int* visited = new int[V];
	int* d = new int[V];
	int* f = new int[V];
	for (int i = 0; i < V; i++)
		visited[i] = 0;
	time = 0;
	dfsviz(0, visited, d, f, adj);
	for (int i = 0; i < V; i++) {
		if (visited[i] == 0) {
			cout << "grafi ar aris bmuli" << endl;
			return;
		}    
	}
	adjT = new list<int>[V];
	for (int i = 0; i < V; i++) {
		for (auto t = adj[i].begin(); t != adj[i].end(); t++) {
			adjT[*t].push_back(i); //constructing transpose graph
		}
	}
	for (int i = 0; i < V; i++)
		visited[i] = 0;
	int max = 0;
	for (int i = 0; i < V; i++) {
		if (f[i] > f[max])max = i; 
	}
	time = 0;
	dfsviz(max, visited, d, f, adjT); 
	for (int i = 0; i < V; i++) {
		if (visited[i] == 0) {
			cout << "grafi ar aris bmuli" << endl;
			return;
		}
	}
	cout << "grafi bmulia" << endl;
}
int main() {
	Graph g(5);
	g.addEdge('a', 'b');
	g.addEdge('b', 'c');
	g.addEdge('d', 'e');
	g.addEdge('e', 'a');
	g.addEdge('c', 'e');
	g.addEdge('c', 'a');
	g.addEdge('c', 'd');
	g.DFS();
}
