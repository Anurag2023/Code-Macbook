#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ;i < n ; i++){
        cin>>arr[i];
    }
    int count = -2;
    for(int i = 0;i<10-n;i++){
        for(int j = i;j<10-n;j++){
            count++;
        }
    }
    cout<<6*count<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}