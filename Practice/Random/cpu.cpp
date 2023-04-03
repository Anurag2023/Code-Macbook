#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> nums;
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    nums.push_back(arr);
    arr.pop_back();
    arr.pop_back();
    arr.push_back();
    arr.push_back();

    arr.push_back();
    arr.push_back();


    return 0;
}