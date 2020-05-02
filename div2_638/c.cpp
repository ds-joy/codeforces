#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k;
    string str;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        cin >> str;
        string arr[k]={};

        sort(str.begin(),str.end());

        if(k==1)
        {
            cout << str << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if( n>3 && i == (n-2) && (arr[(i-1)%k] == (arr[i%k]+str[i])))
                {
                    arr[(i-1)%k] += str[i];
                    arr[(i-1)%k] += str[i+1];
                    break;
                }
                else
                {
                    arr[i%k] += str[i];
                }
            }

            sort(arr,arr+k);
            cout << arr[k-1] << endl;
        }
    }

    return 0;
}
