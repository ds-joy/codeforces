#include<bits/stdc++.h>
#define ll long long
using namespace std;

void swap_value(ll *xp, ll *yp);
void printArray(ll arr[], ll size);

void selectionSort(ll arr[], ll n) 
{
    ll min_index;
    for(ll i=0; i<n; i++)
    {
        min_index = i;
        for(ll j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        if(min_index != i)
        {
            swap_value(&arr[min_index], &arr[i]);
        }
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

    selectionSort(arr, n);
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