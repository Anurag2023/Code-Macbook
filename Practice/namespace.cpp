#include<bits/stdc++.h>
using namespace std;

void fun(int& a,int& b,int& c,int n)
{
    if(n==0)
        return;
    a++;
    fun(a,b,c,n-1);
    b++;
    fun(a,b,c,n-1);
    c++;
    
}

int main(){
    int count = 0;
    int a=0,b=1,c=2,n=5;
    fun(a,b,c,n);
    cout<<a<<" "<<b<<" "<<c<<" ";
    return 0;
}