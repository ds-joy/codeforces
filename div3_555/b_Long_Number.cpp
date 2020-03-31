#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a;

    cin >> a;

    int arr[10];

    for(int i = 1; i < 10; i++)
    {
        cin >> arr[i];
    }



    int p = 1;
    for(int i = 1, temp; i <= n; i++)
    {
        p = p*10;

        cout << "p: " << p << endl;

        temp = a % p;
        cout << "temp: " << temp <<endl;

        cout << arr[temp] << endl;

    }

    cout << endl;




    return 0;
}
