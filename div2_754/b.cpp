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
        cin >> n;

        string s;
        cin >> s;

        if(is_sorted(s.begin(),s.end()))
        {
            cout << 0 << endl;
            continue;
        }

        string temp = s;

        sort(temp.begin(), temp.end());
        cout << 1 << endl;

        vector<ll> k;


    }
    return 0;
}
