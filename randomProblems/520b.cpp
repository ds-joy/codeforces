#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll given, desired;
    cin >> given >> desired;

    if(desired <= given) {
        cout << (given - desired) << endl;
        return 0;
    }

    if(desired == 2*given)
    {
         cout << 1 << endl;
         return 0;
    }

    if(desired > 2*given)
    {
        ll a = desired / given;
        ll b = desired % given;

        cout << a+b << endl;
        return 0;
    }

    ll a = desired/2;
    ll ans = (given-a) + (desired - 2*a) + 1;
    cout << ans << endl;


}