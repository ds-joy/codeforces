#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll k)
{
   cout << n << " " <<  k << endl;
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

    int co = 1;
    while(t--)
    {
        cout << "Case #" << co << ":";
        co++;

        cin >> n >> k;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin >> arr[i];

        if(2*k < n)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(arr, arr+n);

        // for(ll i=0; i<n; i++)
        //     cout << arr[i] << " ";
        
        int flag = 0;
        int count = 1;

        for(ll i=0; i<n-1; i++)
        {
            if(arr[i] == arr[i+1])
                count++;
            else count = 1;
            
            if(count > 2)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }
    return 0;
}
