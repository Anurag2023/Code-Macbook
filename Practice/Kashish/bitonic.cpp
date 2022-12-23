#include<bits/stdc++.h>
using namespace std;
 
long long maxWays(long long n)
{
    return (pow(2, n - 1) - 2);
}
 
int main()
{
    long long n;
    cin>>n;
    long long ans = maxWays(n);
    ans%=1000000007;
    cout<<ans;
    return 0;
}