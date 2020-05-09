#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, k, i, a, b, j;
    string n;

    cin >> t;
    while(t--)
    {
        a = 1;
        cin >> n;
        int l = n.size();

        for(i = 1; i< l; i++)
        {
            if(n[i] != '0')
                a++;
        }

        cout << a << endl;
        a = 0;
        for(i=l, j = 0; i>=0; i--, j++)
        {
            if(n[i] == '0')
                continue;
            else
            {
                for(k=0; k<j; k++)
                    cout << n[i+k];
                if(a != 0)
                    cout << " ";
                a++;
                n[i] = '0';
            }
        }
        cout << endl;
    }

    return 0;
}

