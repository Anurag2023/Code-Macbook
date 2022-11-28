#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums , int m){
    sort(nums.begin(),nums.end());
    int l = 0, r = m-1;
    int i=l,j=r,diff = INT_MAX;
    while(r<nums.size()){
        if(abs(nums[l]-nums[r])<diff){
            diff = abs(nums[l]-nums[r]);
            i=l;
            j=r;
        }
        l++;
        r++;
    }
    cout<<"index - "<<i<<" end - "<<j<<"; ";
    return diff;
}

int main(){
    int n,m;
    cout<<"enter n , m ";
    cin>>n>>m;
    vector<int>nums(n);
    for(int i = 0; i < n ; i++){
        cin>>nums[i];
    }
    int ans = solve(nums,m);
    cout<<ans;
    return 0;

}