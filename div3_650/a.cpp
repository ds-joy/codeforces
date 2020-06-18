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
        string str;
        cin >> str;
        cout << str[0];
        n = str.size();

        for(ll i=1; i<n-1; i=i+2)
        {
            cout << str[i];
        }
        cout << str[n-1] << endl;

    }
    return 0;
}
