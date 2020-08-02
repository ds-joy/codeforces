#include<bits/stdc++.h>
#define ll long long
using namespace std;

void addEdge(vector<ll> &graph[], ll u, ll v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void printGraph(const vector<ll> &graph[], ll vertices)
{

    for(ll i=1; i<=vertices; i++)
    {
        cout << graph[i][0];
        ll len = graph[i].size();
        for(ll j=1; j<=vertices; j++)
        {
            cout << "-->" << graph[i][j];

        }

        cout << endl;
    }
    cout << "hi" << endl;
}

int main()
{
    ll n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << endl;

    vector<ll> graph[n+1];
    ll edge;
    cout << "Enter the number of edges: ";
    cin >> edge;
    cout << endl;

    ll u, v;
    cout << "Enter the edges:" << endl;
    for(ll i=0; i<edge; i++)
    {
        cin >> u;
        cin >> v;
        addEdge(graph, u, v);
        cout << "done" << endl;
    }

    printGraph(graph, n);

}
