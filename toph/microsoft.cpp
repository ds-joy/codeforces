#include<bits/stdc++.h>
using namespace std;

int main() {

    string user_name;
    cin >> user_name;

    int arr[26] = {0};

    int len = user_name.size();

    for(int i=0; i<len; i++)
    {
        int c = ((int)user_name[i])-97;
        arr[c]++;
    }

    if(arr[12] >= 1 && arr[8] >= 1 && arr[2] >= 1 && arr[17] >= 1 && arr[14] >= 1 && arr[18] >= 1 && arr[5] >= 1 && arr[19] >= 1)
        cout << "We both love Microsoft!" << endl;
    else
        cout << "Only I love Microsoft!" << endl;

    return 0;
}
