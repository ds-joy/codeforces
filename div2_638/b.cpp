#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k, a;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        set<ll> nums;

        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            nums.insert(a);
        }

        ll l = nums.size();

        if(l > k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n*k << endl;
            for (ll i = 0; i < n; i++)
            {
                for(ll e: nums)
                {
                    cout << e << " ";
                }
                for(ll j=0; j<k-l; j++)
                {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
