#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll f(ll n)
{
     if(n%2 == 0)
        return 2;
     else
     {
         for(ll i = 3; i*i < n; i = i+2)
         {
             if(n%i == 0)
                return i;
         }

         return n;
     }

}

int main()
{
    ll t, n, k, a, i, j;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        for(i=0; i<k; i++)
        {
            n = n + f(n);

        }
        cout << n << endl;
    }

    return 0;
}
