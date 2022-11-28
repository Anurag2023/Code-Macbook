#include<bits/stdc++.h>
using namespace std;

void solve(string s , int index , string output, vector<string> &ans){
    //base case
    if(index>=s.length()){
        ans.push_back(output);
        return;
    }
    //exclude
    output.push_back(s[index]);
    solve(s,index+1,output,ans);
    output.pop_back();

    //include
    output.push_back('-');
    output.push_back(s[index]);
    solve(s,index+1,output,ans);
    return;

}

void display(vector<string>ans){
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<endl;
    }
    return;
}

int main(){
    int a;
    string s;
    cout<<"enter string";
    cin>>s;
    int index = 1;
    string output = "";
    output.push_back(s[0]);
    vector<string> ans;
    solve(s,index,output,ans);
    display(ans);
    return 0;
}