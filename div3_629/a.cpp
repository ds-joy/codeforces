#include<iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    long long a;
    long long b;

    while(t--)
    {
        cin >> a >> b;
        if(a%b == 0)
            cout << 0 << endl;
        else if(a<b)
            cout << b-a << endl;
        else
            cout << (b*((a/b)+1)-a) << endl;
    }
    return 0;
}
