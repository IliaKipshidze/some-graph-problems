#include<iostream>
#include<vector>
#include <list>
using namespace std;
class Graph
{
	int V;
	list<char>* adj;
	vector <char> eq2;
public:
	Graph(int V);
	void addEdge(char v, char w);
	// bechdavs s cverodan siganeshi dzebnis algoritmit shemovlil cveroebs.
	void prtEqualsTo2();
	void BFS(int k);
};
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<char>[V];
}
void Graph::addEdge(char v, char w)
{
	int k = int(v - 'a');
	adj[k].push_back(w);
}
void Graph::prtEqualsTo2() {
	if (eq2.size() == 0)cout << "am grafshi mocemuli sawyisi wverodan d=2 mandzilit dashorebuli wvero ar aris" << endl;
	else {
		cout << "grafshi mocemuli sawyisi wverodan d=2 mandzilit dashorebuli wvero/wveroebia:\n";
		for (int i = 0; i < eq2.size(); i++) {
			cout << eq2[i] << endl;
		}
	}
}
 void Graph::BFS(int k)
{
	int s = k - 'a';
	// kvela cveros anichebs agmoucheneli cveros statuss
	bool* visited = new bool[V];
	int* d = new int[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
		d[i] = -1;
	}
	// rigi,romelsac vikenebt bfs-shi
	list<int> queue;
	// s cveros vanichebt agmochenilis statuss da shegvkavs rigshi
	visited[s] = true;
	d[s] = 0;
	queue.push_back(s);
	while (!queue.empty())
	{
		// rigidan amoige elementi da dabechde
		s = queue.front();
		cout << char('a'+s) << " " << "distance = " << d[s] << endl;//amis dawera am davalebashi sachiro ar aris ufro lamazi da tvalsachino rom iyos dzebnis gzasac davbechdav tavisi mandzilebit
		queue.pop_front();
		// shemoiaret amogebuli cveros kvela mosazgvre cvero. Tu es
		// wvero ar iko agmochenili, mas mianichet agmochenilis
		// statusi da sheikvanet rigshi.
		for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (!visited[*i - 'a'])
			{
				visited[*i - 'a'] = true;
				d[*i - 'a'] = d[s] + 1;
				if (d[*i - 'a'] == 2) eq2.push_back(*i);
				queue.push_back((*i - 'a'));
			}
		}   
	}
}
int main()
{
	Graph G1(6);
	G1.addEdge('a', 'd');
	G1.addEdge('b', 'a');
	G1.addEdge('c', 'b');
	G1.addEdge('d', 'b');
	G1.addEdge('f', 'a');
	G1.addEdge('f', 'c');
	cout << "wvero a-dan dawyebuli siganeshi dzebnis gza, a wverodan mandzilebiturt" << endl;
	G1.BFS('a');
	G1.prtEqualsTo2();
	return 0;
}