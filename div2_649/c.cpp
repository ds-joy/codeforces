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
    
    ll t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin >> arr[i];

        if(n == 3)
        {
            cout << 1 << " " << 3 << endl;
        }

        else
        {
            for(ll i=1; i<n-2; i++)
                cout << i << " ";
            cout << n << endl;
        }
    }
    
    return 0;
}
