#include<iostream>
using namespace std;

template<typename t> void fun(t a, t b){
    t ans = (a>b) ? a : b;
    cout<<ans<<"\n";
}

int main(){

    fun<int>(5,7);
    //cout<<ans;
    fun<char>('a','v');
    return 0;
}