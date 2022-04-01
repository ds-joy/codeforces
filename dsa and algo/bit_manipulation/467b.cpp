#include<bits/stdc++.h>
using namespace std;

int solve(int n, int m, int k, int arr[])
{
    int temp, count, frnd=0, i;


    for(i=0; i<m; i++)
    {
        temp = arr[i]^arr[m];
        count = 0;

        while(temp)
        {
            if(temp&1)
                count++;
            temp = temp >> 1;
        }

        if(count<=k)
            frnd++;
    }

    return frnd;

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



    int n, m , k;
    cin >> n >> m >> k;

    int arr[m+1];
    for(int i=0; i<=m; i++)
    {
        cin >> arr[i];
    }

    cout << solve(n, m, k, arr) << endl;
    return 0;
}