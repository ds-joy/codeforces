#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k;
    string str;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        cin >> str;
        sort(str.begin(), str.end());

        if(str[0] != str[k-1])
        {
            cout << str[k-1] << endl;
            continue;
        }

        cout << str[0];

        if(str[k] != str[n-1])
        {
            for(int i=k; i<n; i++)
                cout << str[i];
            cout << endl;

        }
        else
        {
            for(int i=0; i<(n-1)/k; i++)
                cout << str[n-1];
            cout << endl;

        }

    }

    return 0;
}
