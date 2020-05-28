#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll arr[])
{
    for(ll i = n-1; i>=0; i--)
    {
        if(arr[i] <= i+1)
            return i+2;
    }
    return 1;
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
        cin >> n;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);

        cout << solve(n, arr) << endl;
        
    }

    return 0;
}
