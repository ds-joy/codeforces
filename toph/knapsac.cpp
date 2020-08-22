#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll si[102], fun[102];

ll max(ll x, ll y)
{
   return (x > y) ? x : y;
}

ll knapSack(ll capa, ll si[], ll fun[], ll n)
{
   ll i, wt;
   ll K[n + 1][capa + 1];

   for (i = 0; i <= n; i++)
   {
      for (wt = 0; wt <= capa; wt++)
      {
         if (i == 0 || wt == 0)
            K[i][wt] = 0;

         else if (si[i - 1] <= wt)
            K[i][wt] = max(fun[i - 1] + K[i - 1][wt - si[i - 1]], K[i - 1][wt]);

         else
             K[i][wt] = K[i - 1][wt];
      }
   }
   return K[n][capa];
}


void solve(ll n, ll capa, ll c)
{
    if(n==0)
    {
        cout << "Case " << c <<": " << 0 << endl;
        return;
    }

    if(capa == 0)
    {
        cout << "Case " << c <<": " << 0 << endl;
        return;
    }

    
    cout << "Case " << c <<": " << knapSack(capa, si, fun, n) << endl;
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

    ll t;
    cin >> t;

    ll c = 1;
    while(t--)
    {

        ll n, capa;
        cin >> n >> capa;
        
        for(ll i=0; i<n; i++)
        {
            cin >> si[i] >> fun[i];
        }

        solve(n, capa, c);
        c++;

        

        

        
    }
    return 0;
}

