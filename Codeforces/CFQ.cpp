#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i  = 0;i<n;i++){
            cin>>arr[i];
        }
        int l=0,r=n-1;
        int count = 0;
        while(l<r){
            if(arr[l]==1 && arr[r]==0){
                count++;
                l++;
                r--;
            }
            else if(arr[r]==1 && arr[l]==0){
                r--;
                l++;
            }
            else if(arr[l]==0 && arr[r]==0){
                l++;
            }
            else{
                r--;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}