#include<iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    string str;
    string a;
    string b;
    long long len;

    while(t--)
    {
        cin >> len;
        cin >> str;
        a = str;
        b = str;

        for(long long i=0; i < len; i++)
        {
            if(str[i] == '2')
            {
                a[i] = '1';
                b[i] = '1';
            }

            else if(str[i] == '0')
            {
                a[i] = '0';
                b[i] = '0';
            }
            else
            {
                a[i] = '1';
                b[i] = '0';

                for(long long j=i+1; j < len; j++)
                {
                    a[j] = '0';
                    b[j] = str[j];
                }
                break;

            }
        }
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}

