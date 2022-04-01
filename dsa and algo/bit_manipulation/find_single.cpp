#include<bits/stdc++.h>
using namespace std;
#define INT_SIZE 32

int find_single(int arr[], int n)
{
    int result = 0;
    int x, sum;

    for(int i=0; i<INT_SIZE; i++)
    {
        sum = 0;
        x = (1 << i);

        for(int j=0; j<n; j++)
        {
            if(arr[j] & x)
                sum++;
        }

        if((sum%3) != 0)
        {
            // setting the bit
            result = result | x;
        }
    }

    return result;
}
















int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<< find_single(arr, n)<<endl;

    return 0;
}