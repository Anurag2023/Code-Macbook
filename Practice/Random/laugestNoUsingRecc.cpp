#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
#include<sstream>
#include <climits>
using namespace std;

void fun(vector<int>&arr , int &maxi, int i){
    if(i>=arr.size()){
        return;
    }
    int ans = max(arr[i],maxi);
    fun(arr , ans , i+1);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN;
    fun(arr,maxi,0);
    cout<<maxi;
    return 0;
}