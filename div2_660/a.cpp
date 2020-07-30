#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n)
{
    int arr[4] = {6, 10, 14, 15};

    if(n>30)
    {
        int l = n-30;
        if(l != 6 && l != 10 && l != 14)
        {
            cout << "YES" << endl;
            cout << "6" << " " << "10" << " " << "14" << " ";
            cout << l << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << "6" << " " << "10" << " " << "15" << " ";
            cout << l-1 << endl;
        }
        
    }
    else
    {
        cout << "NO" << endl;
    }
    
   
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
    
    ll t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n;
        solve(n);

    }
    return 0;
}


