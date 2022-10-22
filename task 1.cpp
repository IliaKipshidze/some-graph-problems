
//////////////////////////////////////////////      მოსაზღვრე წვეროთა სიით

//#include <iostream>
//#include <list>
//using namespace std;
//class Graph
//{
//	int V; // cveroTa raodenoba
//	list<char>* adj; // pointeri bmuli siebis masivze
//public:
//	Graph(int V); // konstruqtori
//	void addEdge(char v, char w); // funqcia, romelic amatrbs cibos grafs
//	// funqcia, romelic bechdavs grafs
//	void printG();
//};
//Graph::Graph(int X)
//{
//	this->V = X;
//	adj = new list<char>[X];
//}
//void Graph::addEdge(char v, char w)
//{
//
//	adj[v-'a'].push_back(w); // amatebs w-s v’s sias.
//
//}
//void Graph::printG() {
//	for (int i = 0; i < V; i++) {
//		cout << char(i + 'a') << " -> ";
//		for (auto it = adj[i].begin(); it != adj[i].end(); it++)
//			cout << *it << ' ';
//			cout << endl;
//		
//	}
//}
//int main()
//{
//	Graph g(6);
//	g.addEdge('a', 'd');
//	g.addEdge('b', 'a');
//	g.addEdge('b', 'e');
//	g.addEdge('c', 'b');
//	g.addEdge('a', 'e');
//	g.addEdge('c', 'e');
//	g.addEdge('d', 'b');
//	g.addEdge('e', 'd');
//	g.addEdge('f', 'e');
//	g.addEdge('f', 'c');
//	cout << "representation of graph using adjacency list representation" << endl;
//	g.printG();
//	return 0;
//}

/////////////////////////////////////////       მატრიცით

//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//	const int V = 6;
//int main() {
//	int g[V][V];
//	ifstream ifs("data.txt");
//	for (int i = 0; i < V; i++) {
//		for (int j = 0; j < V; j++) {
//			ifs >> g[i][j];
//		}
//	}
//	/*a b c d e f
//	a 0 1 0 0 0 0
//	b 0 0 1 1 0 0
//	c 0 0 0 0 0 1
//	d 1 0 0 0 1 0
//	e 1 1 1 0 0 1
//	f 0 0 0 0 0 0*/ //დაბეჭდვა ასე უფრო ლამაზი იქნება
//	cout << ' ';
//	for (int i = 0; i < 6; i++) {
//		cout << setw(4) << char('a' + i);
//	}
//	cout << endl;
//	for (int i = 0; i < V; i++) {
//		cout << char('a' + i);
//		for (int j = 0; j < V; j++) {
//			cout << setw(4) << g[i][j];
//		}
//		cout << endl;
//	}
//}