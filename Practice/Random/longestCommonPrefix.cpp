#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>vec;
    vector<char>ans;
    vec.push_back("anurag");
    vec.push_back("anuras");
    vec.push_back("anureghjk");
    bool flag = true;
    int mini = vec[0].size();
    for(int i = 0;i<vec.size();i++){
        int s = vec[i].size();
        mini = min(mini,s);
    }
    for(int i = 0;i<mini;i++){
        char ch = vec[0][i];
        for(int j=0;j<vec[0].size();j++){
            if(vec[j][i]!=ch && vec[j].size()>=i){
                flag = false;
            }
        }
        if(flag){
            ans.push_back(ch);
        }
        else
            {
                for(auto i : ans){
                    cout<<i;
                }
                break;
            }
    }
    cout<<endl;
    return 0;
}