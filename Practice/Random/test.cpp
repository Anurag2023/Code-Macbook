#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
#include<sstream>
using namespace std;
int main(){
    string s = "123 456 7981";
    stringstream ss(s);
    for(int i=0;i<3;i++){
        int a;
        ss >> a;

        cout<<ss<<" val - "<<a<<" ";
    }
    return 0;
}