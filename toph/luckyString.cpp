#include<bits/stdc++.h>
using namespace std;

string Max = "zzzzzzzzzzzzzzzzzzzz";

bool compare(string str1, string str2 )
{
    int len = str1.size();
    for(int i=0; i<len; i++)
      if(str1[i] != str2[i])
        return false;
    return true;
}

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);












    // input
    string str1, str2;
    cin >> str1 >> str2;
    int n;
    cin >> n;
    string strarr[n];
    for(int i=0; i<n; i++)
        cin >> strarr[i];
    



    // if(str1.size() > str2.size())
    // {
    //     string temp = str1;
    //     str1 = str2;
    //     str2 = temp;
    // }


    int len = str1.size();
    // cout << " len: " << len << endl;
    int count = 0;
    int flag = 0;

    for(int i=0; i<n; i++)
    {
        int sublen = strarr[i].size();
        string s = strarr[i];
        cout << " s1: " << s << endl;

        if(sublen <= len)
        {
            if(sublen == len && compare(str1, s))
            {
                count++;
                flag = 1;
                strarr[i] = Max;
                break;
            }

            for(int j=i+1; j<n; j++)
            {
                if(strarr[j].size() == (len-sublen))
                {
                    s = strarr[i] + strarr[j];
                    sort(s.begin(), s.end());

                    cout << " s: " << s << endl;
                    if(compare(str1, s))
                    {
                        count+=2;
                        flag = 1;
                        strarr[i] = Max;
                        strarr[j] = Max;
                        break;
                    }

                }
                
            }
            if(flag == 1)
                break;
        }
    }

    if(flag==0)
    {
        cout << "-1" << endl;
        return 0;
    }


    len = str2.size();
    flag = 0;
    for(int i=0; i<n; i++)
    {
        int sublen = strarr[i].size();
        string s = strarr[i];
        cout << " s1: " << s << endl;

        if(sublen <= len)
        {
            if(sublen == len && compare(str2, s))
            {
                count++;
                flag = 1;
                strarr[i] = Max;
                break;
            }

            for(int j=i+1; j<n; j++)
            {
                if(strarr[j].size() == (len-sublen))
                {
                    s = strarr[i] + strarr[j];
                    sort(s.begin(), s.end());

                    cout << " s: " << s << endl;
                    if(compare(str2, s))
                    {
                        count+=2;
                        flag = 1;
                        strarr[i] = Max;
                        strarr[j] = Max;
                        break;
                    }
                }
            }

            if(flag == 1)
                break;
        }
    }

    if(flag == 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    else
    {
        cout << count << endl;
    }
    

    

    return 0;
}
