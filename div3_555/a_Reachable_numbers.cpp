#include<iostream>
using namespace std;

int main() {
    long long n, count;
    cin >> n;
    
    long long arr[1000];
    count = 1;
    arr[count-1] = n;

    while(1) {
        count++;
        n=n+1;

        while(n%10 == 0){
            n = n/10;
        }

        for(int i = 0; i<count-1; i++) {
            if(arr[i] == n) {
                cout << count-1 << endl;
                return 0;
            }
            else {
                arr[count-1] = n;
            }
        }
    }

    return 0;
}

