
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string str)
{
   bool alpha[26]={0};
   
   ll len = str.size(); 
   ll c;

   for(ll i=0; i<len; i++)
   {
       c =((int) str[i]) - 65;
       alpha[c] = 1;
   }

   ll count=0;
   for(ll i=0; i<26; i++)
   {
       if(alpha[i] == 0)
        count++;
   }


   cout <<count << endl;
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
    
    
        string str;
        cin >> str;
        solve(str);

    return 0;
}
