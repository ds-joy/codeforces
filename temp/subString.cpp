#include<bits/stdc++.h>
using namespace std;

int subSequence(string str, string output[]);

int main() 
{
    string output[1000];
    string str = "abcd";

    int length = subSequence(str, output);

    for(int i=0; i<length; i++)
    {
        cout << output[i] << endl;
    }
}

int subSequence(string str, string output[])
{
    if(str.length()==0)
    {
        output[0] = "";
        return 1;
    }

    int smallerOutputSize = subSequence(str.substr(1), output);

    for(int i=0; i<smallerOutputSize; i++)
    {
        output[i+smallerOutputSize] = str[0] + output[i];
    }

    return 2*smallerOutputSize;
}