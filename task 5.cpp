


#include <iostream>
#include <vector>
using namespace std;

#define INF 8888888
#define V 5
#define NILL -1

void find_and_print_cycle(int p[V][V], int graph[V][V]) {
    vector<int>cycle;
    for (int i = 0; i < V; i++) {
        if (p[i][i] != NILL) {
            cout << "There is a cycle in the graph and one of them (or the only one) is:" << endl;
            int j = p[i][i];
            cycle.push_back(i);
            while (j != i) {
                cycle.push_back(j);
                j = p[i][j];
            }
            cycle.push_back(j);
            for (int t = cycle.size() - 1; t >= 0; t--) {
                cout << char(cycle[t] + 97) << ' ';
            }
            cout << endl << "it's negative weight = " << graph[i][i];
            return;
        }
    }
    cout << "There is not a cycle in the graph!" << endl;
}
void floyd_Warshall(int graph[V][V], int p[V][V])
{
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (graph[i][j] > (graph[i][k] + graph[k][j]) && graph[i][k] != INF && graph[k][j] != INF) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                    p[i][j] = p[k][j];
                }
            }
        }
    }
    find_and_print_cycle(p, graph);
}
int main()
{
    int graph[V][V] = { { 0, 15, INF, INF, INF },
                        { INF, 0, 8, -22, 1 },
                        { INF, INF, 0, INF, INF },
                        { 1, INF, INF, 0, INF },
                        { INF, INF, 4, 2, 0 } };
    int p[V][V] = { { NILL, 0, NILL, NILL, NILL },
                    { NILL, NILL, 1, 1, 1 },
                    { NILL, NILL, NILL, NILL, NILL },
                    { 3, NILL, NILL, NILL, NILL },
                    { NILL, NILL, 4, 4, NILL } };

    floyd_Warshall(graph, p);
    return 0;
}
