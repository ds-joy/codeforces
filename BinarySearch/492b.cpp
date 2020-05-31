#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, l;
    cin >> n >> l;

    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin>>arr[i]; 
    sort(arr, arr+n);
    

    ll x = 0;
    ll maxdist = 0;
    for(ll i=1; i<n; i++) {
        x = arr[i] - arr[i-1];
        if(x>maxdist)
            maxdist = x;
    }

    x = 2*max((arr[0]-0), (l - arr[n-1]));



    maxdist = max(maxdist, x);
    cout << maxdist/2.0 << endl;



    return 0;
}
