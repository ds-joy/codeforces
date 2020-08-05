#include<bits/stdc++.h>
#define ll long long
#define MAX 300004
using namespace std;

vector<ll> graph[MAX];
bool visited[MAX];

void dfs( ll starting_node);

int main() {
    ll nodes, desired_node;
    cin >> nodes >> desired_node;

    ll x;
    for(ll i=1; i<nodes; i++) {
        cin >> x;
        graph[i].push_back(i+x);
    }

    dfs(1);

    if(visited[desired_node] == 1)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}

void dfs( ll starting_node) {
    visited[starting_node] = 1;

    ll len = graph[starting_node].size();
    for(ll i=0; i<len; i++){
        if(visited[ graph[starting_node][i] ] == 0) {
            dfs(graph[starting_node][i]);
        }
    }
}
