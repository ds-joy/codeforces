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
    
    ll t, r, c;
    cin >> t;

    int co = 1;
    while(t--)
    {
        cout << "Case #" << co << ":";
        co++;

        cin >> r >> c;
        char arr[r][c];
        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
                cin >> arr[i][j];
        }
            

        if(r == 1 || c == 1)
        {
            int count = 0;
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(arr[i][j] == '^')
                    count++;
                } 
            }

            if(count == 0)
            {
                cout << "Possible" << endl;

                for(ll i=0; i<r; i++)
                {
                    for(ll j=0; j<c; j++)
                    {
                        cout << ".";
                    }
                    cout << endl;
                }
            }

            else
            {
                cout << "Impossible" << endl;
            }
            
            continue;
        }

        cout << "Possible" << endl;

        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
            {
                cout << "^";
            }
            cout << endl;
        }
    }
    return 0;
}
