#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
#include<sstream>
using namespace std;

int solve(vector<int>nums, int n){
    vector<int>ans(nums);
    sort(ans.begin(),ans.end());
    int good = 0,bad = 0;
    for(int i = 0 ; i < n ; i++){
        if(nums[i]==ans[i]){
            good+=nums[i];
        }
        else{
            bad+=nums[i];
        }
    }
    int sum = good - bad;
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    int ans = solve(nums,n);
    cout<<ans;
    return 0;
}