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
    
    ll t, n, x;
    cin >> t;

    while(t--)
    {
        ll sum = 0;
        cin >> n >> x;
        ll arr[n];

        for(ll i=0; i<n; i++)
            cin >> arr[i];
        
        for(ll i=0; i<n; i++)
            sum += arr[i];

        if(sum%x != 0)
        {
            cout << n << endl;
            continue;
        }
            
        
        ll temp = sum;
        ll leftCount = n;
        for(ll i=0; i<n; i++)
        {
            leftCount --;
            temp -= arr[i];
            if(temp%x != 0)
                break;
        }

        temp = sum;
        ll rightCount = n;
        for(ll i=n-1; i>=0; i--)
        {
            rightCount--;
            temp -= arr[i];
            if(temp%x != 0)
                break;
        }

        if(leftCount == 0 && rightCount==0)
            cout << -1 << endl;
        else
            cout << max(leftCount, rightCount) << endl;
        
        }
        
    return 0;
}
