#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll arr[], ll n)
{
    
    ll max = distance(arr.begin(),max_element(arr.begin(), arr.end()));
   
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
        cin >> n >> k;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin >> arr[i];

        solve(arr, n);

    }
    return 0;
}
