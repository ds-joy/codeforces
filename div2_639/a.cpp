#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, m, i;

    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(n == 1 || m == 1 || (n==m && n==2))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
