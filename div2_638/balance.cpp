#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, a, b, c;
    cin >> t;

    while (t--)
    {
        cin >> n;
        ll arr[n+2] = {0};
        for (ll i = 1; i <= n; i++)
        {
            arr[i] = pow(2, i);
        }

        /*
        for (ll i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        */

        a = arr[n];
        b = arr[n-1];

        for (ll i = 1; i <= n-2; i++)
        {
           if(i<= ((n-2)/2))
           {
               a += arr[i];
           }
           else
           {
               b += arr[i];
           }

        }

        //cout << a << " " << b << endl;
        cout << abs(a-b) << endl;
    }

    return 0;
}

