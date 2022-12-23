#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void lauda(int n , int k , int sum, int i,vector<int>&nums,int max){
    if(i>n){
        ans.push_back(sum);
        return;
    }
    lauda(n,k,sum,i+1,nums,max);
    int a = sum+nums[i];
    lauda(n,k,a,i+k,nums,max);
    

}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    lauda(n,k,0,0,nums,0);
    sort(ans.begin(),ans.end());
    cout<<ans[0];
    return 0;
}