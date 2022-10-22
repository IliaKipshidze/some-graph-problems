# some-graph-problems

1. represent the given graph in the form of:
    a) adjacency list
    b) adjacency matrix
    
G=(V,E) where V={a,b,c,d,e,f},  E={(a,d),(b,a),(b,e)(c,b),(a,e),(c,e),(d,b),(e,d),(f,e)(f,c)}. 



2. in the given graph G=(V, E) where V={a,b,c,d,e,f},   E={(a,d),(b,a),(c,b),(d,b),(f,a)(f,c)},
   using the BFS algorithm, print the vertices at distance d=2 from the starting vertex a, or print that there are no such vertices.
   
   
3. in G=(V, E) where V={a, b, c, d, e},   E={(a, b), (b, c), (d, e), (e, a), (c, e), (c, a), (c, d)}
   using the DFS algorithm, check if the given directed graph is strongly connected or not.
   
   
4. The MST company plans to electrify 5 cities.
At first, generating stations were built in the 1st and 5th cities. other cities, to be provided with electricity, they should be connected to cities 1 or 5 by electric wires either directly or through other cities.
The table below shows the wiring cost from city i to city j (million GEL). Between which cities should the firm lay power lines so that the cost is minimum, all cities are provided with electricity, and what will be the total cost of it?
                                  
                                  0 2 4 3 6
                                  2 0 5 2 3
                                  4 5 0 1 2
                                  3 2 1 0 1
                                  6 3 2 1 0
                                  
                                 
5. using the Floyd-Warshall algorithm, check if there is the cycle with negative weight in the given graph below.
            ![image](https://user-images.githubusercontent.com/77808909/197341349-a46571a6-8268-4419-a111-8d911b67521d.png)

