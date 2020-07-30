#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n)
{
    ll result = n/4;
    ll remainder = n%4;

    ll x = (n-result-1);

    for(ll i=0; i<x; i++)
    {
        cout << 9;
    }

    if(remainder == 0)
        cout << 9;
    else
    {
        cout << 8;
    }

    for(ll i=0; i<result; i++)
    {
        cout << 8;
    }
    
    cout << endl;        
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
    
    ll t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n;

        solve(n);

    }
    return 0;
}
