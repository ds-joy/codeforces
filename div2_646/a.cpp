#include<bits/stdc++.h>
#define ll long long
using namespace std;

string solve(ll n, ll x, ll arr[])
{
    ll odd = 0, even = 0;
    for(ll i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;
    }
    
    if(odd == 0)
        return "NO";
    if(n==x)
    {
        if( odd%2 == 0)
            return "NO";
        else 
            return "YES";
    }
        
   
    if(x%2 != 0 && x <=odd)
        return "YES";
    
    for(ll i=1; i<=odd, i<=x; i=i+2)
    {
        if(x-i <= even)
        {
            return "YES";
        }    
    }
    return "NO";
    
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
    
    ll t, n, x;
    cin >> t;

    while(t--)
    {
        cin >> n >> x;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        cout << solve(n, x, arr) << endl;

    }
    return 0;
}
