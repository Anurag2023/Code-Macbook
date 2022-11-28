#include<bits/stdc++.h>
using namespace std;

vector<int> fib(int n){
    vector<int> arr(n);
    arr[0]=0;
    arr[1]=1;
    for(int i = 2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr;
}

int main()
{
    int a;
    cin>>a;
    vector<int>ans = fib(a);
    for(auto i : ans)
        cout<<i<<" ";
    return 0;
}