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

    ll t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        ll a,b,c;

        a = ((int) str[0]) - 64 - 26;
        b = ((int) str[1]) - 64 - 26;
        c = ((int) str[2]) - 64 - 26;

        int res = abs(a) + abs(b) + abs(c);
        if(res%2 == 0)
            cout << "Jami" << endl;
        else
        {
            cout << "Jan" << endl;
        }
        
    }

    return 0;
}