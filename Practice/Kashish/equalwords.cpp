#include<bits/stdc++.h>
using namespace std;

void solve(string w1, string w2, int n){
    map<char,int>m1;
    map<char,int>m2;
    for(int i = 0 ; i < n ; i++){
        m1[w1[i]]++;
    }
    for(int i = 0 ; i < n ; i++){
        m2[w2[i]]++;
    }
    
    for(auto i : m1){
        for(auto j : m2){
            if(i.first == j.first){
                if(abs(i.second-j.second)>3){
                    cout<<"-1";
                    return;
                }
                else{
                    break;
                }
            }
            else if(i.second>3){
                cout<<"-1";
                return;
            }
            else if(j.second>3){
                cout<<"-1";
                return;
            }
            break;
        }
        
    }
    for(int i = 0 ; i< n ; i++){
        if(w1[i]>w2[i]){
            cout<<w1;
            return;
        }
    }
    cout<<w2;
}

int main(){
    int n;
    cin>>n;
    string w1,w2;
    cin>>w1>>w2;
    solve(w1,w2,n);
    return 0;
}