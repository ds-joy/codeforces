#include<bits/stdc++.h>
#define ll long long
using namespace std;

void addEdge(vector<ll> graph[], ll u, ll v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void printGraph(vector<ll> graph[], ll nodes)
{
    for(ll i=1; i<=nodes; i++) 
    {
        cout << i;
        ll len = graph[i].size();
        for(ll j=0; j<len; j++ )
            cout << "-->" << graph[i][j];
        cout << endl;
    }
}

int main()
{
    ll n;
    cout << "Enter the number of nodes: ";
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
    }

    printGraph(graph, n);

}
