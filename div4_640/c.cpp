#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k, i, a, b;

    cin >> t;
    while(t--)
    {
        cin >> n >> k;

        a = (k-1)/(n-1);

        cout << k+a << endl;
    }

    return 0;
}


