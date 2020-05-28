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
    
    ll t, n, m, x, y;
    cin >> t;

    while(t--)
    {
        cin >> n >> m >> x >> y;
        char arr[n][m];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
                cin >> arr[i][j];
        }
        
        ll cost = 0;
       
        if((2*x) <= y)
        {
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<m; j++)
                {
                    if(arr[i][j] == '.')
                        cost+=x;
                }    
            }
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<m; j++)
                {
                    if(arr[i][j] == '.'  &&  j<m-1 && arr[i][j+1] == '.')
                    {
                        cost+=y;
                        j+=1;
                    } 
                    else if(arr[i][j] == '.')
                        cost+=x;
                }    
            }
        }
        cout << cost << endl;
    }
    return 0;
}
