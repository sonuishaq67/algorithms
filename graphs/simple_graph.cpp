#include <iostream>
#include <vector>
using namespace std;

void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

void print_graph(vector<int> graph[], int number_of_vertices)
{
    for (int i = 0; i < number_of_vertices; ++i)
    {
        cout << "\n Adjacency list of vertex " << i << "\n head ";
        for (auto x : graph[i])
            cout << "-> " << x;
        printf("\n");
    }
}

int main()
{
    int number_of_vertices = 6;
    vector<int> adj[number_of_vertices];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 4);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 1, 4);
    add_edge(adj, 2, 3);
    add_edge(adj, 3, 5);
    print_graph(adj, number_of_vertices);
    return 0;
}