#include<bits/stdc++.h>
using namespace std;

vector<char> fun(string s)
{
    vector<char> vec;
    map<char,int>m;
    for(int i = 0 ;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(auto k : m)
    {
        if(k.second == 1)
        {
            vec.push_back(k.first);
        }
    }
    return vec;
}

int main()
{
    string s;
    getline(cin,s);
    vector<char>nums = fun(s);
    for(auto i : nums)
        cout<<i<<" ";
    return 0;
}