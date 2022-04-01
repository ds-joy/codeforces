#include<bits/stdc++.h>
using namespace std;

void permutation(string &str, int idx, vector<string>& ans)
{
    if(idx == str.length())
    {
        ans.push_back(str);
        return;
    }

    for(int i=idx; i< str.length(); i++)
    {
        swap(str[i], str[idx]);
        permutation(str, idx+1, ans);
        swap(str[i], str[idx]);
    }
}

int main()
{
    /*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    */


    vector<string> ans;
    string str;
    cin >> str;

    permutation(str, 0, ans);

    for(auto x: ans )
    {
        cout << x << endl;
    }

    return 0;
}
