#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, string arr[])
{
    if(n == 1)
    {
        cout << arr[1] << endl;
        return;
    }

    if(n == 2)
    {
        cout << arr[0] << endl;
        return;
    }

    // odd
    if(n%2 != 0)
    {
        cout << arr[0] << endl;
        return;
    }
    ll num = n/2;
   
    
    for(ll i=num; i>=3; i=i/2)
    {
        num = n/i;
        if(n%i == 0 && (num)%2 ==0 && (num)!=2)
        {
            swap(arr[0], arr[1]);
            solve(num, arr);
            return;
        }
    }

    cout << arr[1] << endl;
    return;
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
        string arr[2] = {"Ashishgup", "FastestFinger"};

        solve(n, arr);
    }
    return 0;
}


