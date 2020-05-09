#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k, a, b, c, i;
    cin >> t;


    while(t--)
    {
        ll count = 0;
        ll cardNeeded = 2;
        cin >> n;
        for(;;)
        {
            cardNeeded = 2;
            if(n<=1)
                break;

            for(;n>=cardNeeded;)
            {
                n -= cardNeeded;
                cardNeeded += 3;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}

