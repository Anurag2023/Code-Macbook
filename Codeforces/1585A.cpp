#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ;i < n ; i++){
            cin>>arr[i];
        }
        int sum = 1;
        bool flag = false;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]==1){
                sum+=1;               
                while(i<n-1 && arr[i+1] == 1){
                    sum+=5;
                    i++;
                }
            }
            else if(arr[i] == 0 && i < (n-1) && arr[i+1]==0){
                cout<<"-1"<<"\n";
                flag = true;
                break;
            }
        }
        if(flag){
            continue;
        }
        cout<<sum<<"\n";
    }
    return 0;
}