#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;



    while(t--)
    {
        long long n;
        cin >> n;

        long long arr[n];
        vector <long long> setArr;
        set<long long> Set;

        long long x;
        for(long long i=0; i < n; i++)
        {
            cin >> x;
            arr[i] = x;
            Set.insert(x);
        }

        for(auto &e: Set)
        {
            setArr.insert(*e);
        }

        cout << Set[1] << endl;

    }
    return 0;
}

