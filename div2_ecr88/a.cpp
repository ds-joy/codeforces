#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n, ll m, ll k) {
    ll cardsEach = 0;
    ll jokersLeft = 0;
    ll secondBest = 0;

    if(n == m && m == k)
        return 0;

    cardsEach = n/k;
    jokersLeft = m - cardsEach;
    k -= 1;


    if(jokersLeft <= 0)
        return m;

    secondBest = ceil(jokersLeft/(k*1.0));
    // cout << "secondBest: " << secondBest << endl;
    return (cardsEach - secondBest);
    

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
    
    ll t, n, m, k;
    cin >> t;

    while(t--)
    {
	    cin >> n >> m >> k;
        cout << solve(n, m, k) << endl;
    }

    return 0;
}
