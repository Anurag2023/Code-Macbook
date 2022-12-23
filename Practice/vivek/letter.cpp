#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
#include<sstream>
using namespace std;

int solve(string s){
    int count = 0;
    for(int i = 0; i<26;i++){
        if((int(s[i]) - 65) == i || int((s[i]) - 97) == i){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cout<<"enter str ";
    cin>>s;
    int ans = solve(s);
    cout<<ans;
    return 0;
}