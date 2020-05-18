#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll factor(ll n)
{
    for(ll i=3; i*i <= n; i=i+2)
    {
        if(n%i == 0)
            return i;
    }
    return n;
}
void solve(ll n, ll k)
{
    if(n%2 == 0)
    {
         cout << (n+2*k) << endl; 
         return;
    }
    else
    {
        ll sum = 0;
        sum = n + factor(n) + (k-1)*2;
        cout << sum << endl;;
    }
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
    
    ll t, n, k, a, i, j;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        solve(n, k);
        
    }

    return 0;
}
