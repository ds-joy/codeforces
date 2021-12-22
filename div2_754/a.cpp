#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    cout << ( (a+b-2*c)%3==0 ? 0: 1) << endl;
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

    while(t--)
    {
        ll a, b, c;

        cin >> a >> b >> c;
        cout << ( (a+b-2*c)%3==0 ? 0: 1) << endl;
    }
    return 0;
}
