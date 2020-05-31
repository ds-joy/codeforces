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
        string str;
        cin >> str;

        char c;
        c = str[0];
        ll len = str.size();
        
        ll zero = 0;
        ll one = 0;
        ll pos = 0;
        for(ll i=len-1; i>0; i--)
        {
            if(str[i] == c)
            {
                pos = i;
                break;
            }
        }
        cout <<"len " << len << " c "<< c <<" pos " << pos << endl;
        for(ll j=1; j<pos; j++)
        {
            if(str[j] == '0' )
                zero++;
            else 
                one++;
        }
        cout << min(one, zero) << endl;

    }
    return 0;
}
