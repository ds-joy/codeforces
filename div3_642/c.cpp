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

    ll t, n, k, row, colom, i, j;
    cin >> t;

    while(t--)
    {
        cin >> n;

        ll sum = 0;

        n = (n-1)/2;

        sum = (n*(n+1)*(2*n+1))/6;
        sum *= 8;

        cout << sum << endl;


    }
    return 0;
}

