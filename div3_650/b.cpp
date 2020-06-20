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
        
        ll evenOnes = 0;
        ll oddZeros = 0;
        for(ll i=0; i<n; i++)
        {
            // even positions
            if(i%2 == 0)
            {
                // odd
                if(arr[i]%2 != 0)
                    evenOnes++;
            }

            // odd positions
            else
            {
                // even
                if(arr[i]%2 == 0)
                    oddZeros++;
            }
        }

        if(evenOnes == oddZeros )
        {
            cout << evenOnes << endl;
        }

        else
        {
            cout << -1 << endl;
        }


    }
    return 0;
}
