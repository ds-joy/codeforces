#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k, a, i, j;
    cin >> t;

    while(t--)
    {
        cin >> n;
        ll arr[n];

        for(i=0; i<n; i++) {
            cin >> arr[i];
        }

        ll l=0, r=n-1;
        ll alice = 0, bob = 0;
        ll flag = 0;
        ll aliceAte = 0, bobAte = 0;

        ll count = 0;
        while(l < r) {
            count++;
            if(flag == 0) {
                for(;;) {
                    if(l == r)
                        break;
                    alice = alice + arr[l];
                    aliceAte += arr[l];
                    cout << "alice got = " << arr[l] << endl;
                    cout << "alice = " << alice << endl;
                    cout << endl;
                    l++;
                    if(aliceAte > bobAte) {
                        flag = 1;
                        bobAte = 0;
                        break;
                    }
                }
            } else {
                for(;;) {
                    if(l == r)
                        break;
                    bob += arr[r];
                    bobAte += arr[r];
                    cout << "bob got = " << arr[r] << endl;
                    cout << "bob = " << bob << endl;
                    cout << endl;
                    r--;
                    if(bobAte > aliceAte) {
                        flag = 0;
                        aliceAte = 0;
                        break;
                    }
                }
            }
        }

        cout << count << " " << alice << " " << bob << endl;
    }
    return 0;
}

