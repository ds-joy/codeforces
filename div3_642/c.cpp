#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k, row, colom, i, j;
    cin >> t;

    while(t--)
    {
        cin >> n;
        row = (n-1)/2;
        colom = row;

        ll sum = 0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<row; j++)
            {
                if(row==i)
                {
                    sum+=abs(colom-j)*2;
                }
                else if(colom == j)
                {
                    sum+=abs(row-i)*2;
                }
                else
                {
                    sum+=(abs(colom-j) + abs(row-i))*2;

                }
            }
        }
        for(i=1; i<row; i++)
            sum+= i*2;

        cout << sum << endl;
    }

    return 0;
}

