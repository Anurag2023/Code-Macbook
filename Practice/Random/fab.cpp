#include<bits/stdc++.h>
using namespace std;
void fun(int a, int b, int n){
    vector<int>odd;
    vector<int>even;
    int sum = 0;
    if(a%2==0){
        even.push_back(a);
    }
    else{
        odd.push_back(a);
    }
    if(b%2==0){
        even.push_back(b);
    }
    else{
        odd.push_back(b);
    }
    for(int i = 0 ; i < n -2 ; i++){
        sum = a+b;
        if(sum%2==0){
            even.push_back(sum);
        }
        else{
            odd.push_back(sum);
        }
        a = b;
        b = sum;
    }
    for(int i = 0; i < even.size() ; i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < odd.size() ;i++){
        cout<<odd[i]<<" ";
    }
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    fun(a,b,n);

    return 0;
}