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
    
    ll t, n, m;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        if(n==1 && m == 1)
            cout << 1 << endl;

        // even
        else if(n%2 == 0)
        {
            cout << (n/2)*m << endl;
        }
        // odd
        else
        {
            if(m==1)
                cout << (((n-1)/2) * m) + m << endl;
            else
            {
                if(m%2 != 2)
                    cout << (((n-1)/2) * m) + (m+1)/2 << endl;
                else
                {
                    cout << (((n-1)/2) * m) + (m/2) << endl;
                }
                
                
            }
            
        }
        
    }
    return 0;
}
