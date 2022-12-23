#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
#include<sstream>
using namespace std;

vector<bool>ans;
void solve(vector<string> s){
    int n = s.size();
    for(int i = 0 ; i < n ; i++){
        int len = s[i].size();
        if(len == 13){
            for(int j = 0 ; j<13 ;j++){
                if()
            }
        }
        else if(len == 11){

        }
        else{
            
        }
    }
    
}

void display(){
    for(int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<string> nums;
    for(int i = 0 ; i < n; i++){
        string s;
        getline(cin,s);
        nums.push_back(s);
    }
    solve(nums);
    display();
    return 0;
}