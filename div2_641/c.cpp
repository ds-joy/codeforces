#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll  n;
ll arr[100002];
vector<ll> lcm_;


ll lcm(ll a, ll b) 
{
    if(a>b)
    {
        for (ll i = a; ; i++)
        {
            if(i%a == 0 && i%b == 0)
                return i;
        }
    }
    else
    {
        for (ll i = b; ; i++)
        {
            if(i%a == 0 && i%b == 0)
                return i;
        }
    }
}

ll gcd(ll a, ll b)
{
    ll r = 0;
    if(a==b)
        return a;
    if(a<b)
    {
        if(b%a == 0)
            return a;
        else
        {
            r = (b%a);
            gcd(r, a);
        } 
    }
    else
    {
        if(a%b == 0)
            return b;
        else
        {
            r = (a%b);
            gcd(r, b);
        } 
    } 
}

void solve()
{
    ll a = 0;
    for ( ll i = 0; i < n; i++)
    {
        for (ll j = i+1; j < n; j++)
        {
            ll a = lcm(arr[i], arr[j]);
            lcm_.push_back(a);
        }
    }

    ll len = lcm_.size();
    ll gcd_ =  gcd(lcm_[0], lcm_[1]);
    for (ll i = 2; i < len; i++)
    {
        gcd_ = gcd(gcd_, lcm_[i]); 
    }

    cout << gcd_ << endl;
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
    
    cin >> n;
    for(ll i=0; i<n; i++)
        cin >> arr[i];

    solve();

    return 0;
}
