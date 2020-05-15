#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n,ll m)
{
    ll sum = 0;
    if(n==1)
    {
        cout << 0 << endl;
        return;
    }
    if(n==2)
    {
        cout << m << endl;
        return;
    }

    m = m*2;
    cout << m  << endl;



}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, m, a, i, j;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        solve(n, m);

    }

    return 0;
}

