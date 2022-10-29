#include<bits/stdc++.h>
#define ll long long
using namespace std;

void swap_value(ll *xp, ll *yp);
void printArray(ll arr[], ll size);

void bubbleSort(ll arr[], ll n) 
{
    ll i, j;
    bool flag = false;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap_value(&arr[j], &arr[j+1]);
                flag = true;
            }
        }
        if(flag == false)
            break;
    }
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
    
    ll n;
    cin >> n;
    ll arr[n];

    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}

void swap_value(ll *xp, ll *yp)
{
    ll temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(ll arr[], ll size)
{
    ll i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}