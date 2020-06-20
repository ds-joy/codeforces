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

        ll flag = 0;
        ll customerAdded = 0;
        ll check = 0;

        if(k == 1)
        {
            for(ll i=0; i<n; i++)
            {
                if(str[i] == '0')
                {
                    if(str[i-1] != '1' && str[i+1] != '1')
                        customerAdded++;
                }
            }
        }

        else
        {
            if(str[0] == '0')
            {
                for(ll i = 1; i<=k; i++)
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

            else
            {
                check = 1;
                for(ll i = k; i<=i+k; i++)
                {
                    if(str[i] == '1')
                    {
                        flag = 1;
                        break;
                    }
                }
                for(ll i = k; i<k-i; i--)
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
            
            ll i;
            if(check == 0)
            {
                i = k+1;
            }
            else
            {
                i = 2*(k+1);
            }
            

            for(; i<n; i= i+k+1)
            {
                flag = 0;
                if(str[i] == '0')
                {
                    for(ll j = i+1; j<=i+k; j++)
                    {
                        if(str[j] == '1')
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 0)
                        customerAdded++;
                }
            }

        }
            
        cout << customerAdded << endl;
    }
    return 0;
}

