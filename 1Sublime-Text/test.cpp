#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++) cin>>nums[i];
    int ans;
    cin>>ans;
    sort(nums.begin(),nums.end());
    int l=0,r=n-1;
    vector<pair<int,int>>vec;
    
    while(l<r){
        if(nums[l]+nums[r]==ans){
            //vector<int>temp;
            vec.push_back(make_pair(nums[l],nums[r]));
        }
    }
}