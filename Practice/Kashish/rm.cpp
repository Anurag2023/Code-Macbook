#include<bits/stdc++.h>
using namespace std;
 int fun(vector<int>& nums) {
        return distance(nums.begin(),unique(nums.begin(), nums.end()));
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++) cin>>nums[i];
    vector<int>ans=fun(nums);

}