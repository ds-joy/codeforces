#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k, a, i, j;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        ll a[n];
        ll b[n];

        for(i=0; i<n; i++)
            cin >> a[i];
        for(i=0; i<n; i++)
            cin >> b[i];

        sort(a, a+n);
        sort(b, b+n, greater<ll>());

        ll count = 0;
        for(i=0; i<n; i++)
        {
            if(count >= k)
                break;
            if(b[i]>a[i])
            {
                count++;
                swap(b[i],a[i]);
            }

        }

        ll sum = 0;
        for(i=0; i<n; i++)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}



