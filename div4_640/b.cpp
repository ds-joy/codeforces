#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k, i, a, b;

    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        a = n-k+1;
        b = n-2*(k-1);
        if(a>0 && a%2!=0)
        {
            cout << "Yes" << endl;
            for(i=0; i<k-1; i++)
            {
                cout << "1 ";
            }
            cout << a << endl;
        }
        else if(b>0 && b%2==0)
        {

            cout << "Yes" << endl;
            for(i=0; i<k-1; i++)
            {
                cout << "2 ";
            }
            cout << b << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}


