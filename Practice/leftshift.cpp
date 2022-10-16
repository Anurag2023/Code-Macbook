#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 8;
    int ans = 0;
    while(ans>=0)
    {
        cout<<ans<<" ";
        n = n<<1;
        ans = 1 << n;
    }
    return 0;
}