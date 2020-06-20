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
        cin >> n >> k;
        string str;
        cin >> str;
        ll count = 0;
        ll customerAdded = 0;
        ll flag = 0;

        if(str[0] == '0')
        {
            for(ll i=0; i<=k; i++)
            {
                if(str[i] == '1')
                {
                    flag = 1;
                    break; 
                }
            }

            if(flag == 0)
                customerAdded++;
        }
        

        count = k;
        for(ll i=k+1; i<n; i++)
        {
           count++;
           if(str[i] == '1')
            count = 0;
           
           if(count == 2*k + 1)
           {
               count = 0;
               customerAdded++;
           }
        }

        cout << customerAdded << endl;

    }
    return 0;
}
