#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
#include<sstream>
using namespace std;
int main(){
    vector<int>v(8);
    iota(v.begin(),v.end(),1);
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
    reverse(v.begin(),v.end());
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}