#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k, a, b, i;
    cin >> t;

    while(t--)
    {
        b = 0;
        set<ll> rooms;
        cin >> n;
        ll arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for(i=0; i<n; i++)
        {
            if(arr[i] == 0)
                a = n;
            else if(arr[i] < 0)
                a = n + (arr[i]%n);
            else
                a = arr[i]%n;

            a = i + a;
            if(rooms.find(a) != rooms.end())
            {
                cout << "No" << endl;
                b = 1;
                break;
            }
            else
            {
                rooms.insert(a);
            }
        }
        if(b == 0)
            cout << "Yes" << endl;
    }
    return 0;
}

