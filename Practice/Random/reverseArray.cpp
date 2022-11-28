#include<bits/stdc++.h>
using namespace std;

void rev(vector<int>&nums)
{
    if(nums.size()==1)
    {
        return;
    }
    int i = nums.size()-1;
    int temp = nums[i];
    
    rev(nums)
    
}

int main(){
    vector<int>nums(10);
    iota(nums.begin(),nums.end(),1);
    for(auto i: nums)
        cout<<i<<" ";
    rev(nums);
    for(auto i:nums)
        cout<<i<<" ";
    return 0;
}