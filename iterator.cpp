#include<bits/stdc++.h>
using namespace std;
void fact(int a)
{
    if(a==0)
        return;
    fact(a-1);
    cout<<a<<" ";

}
int main()
{
    
    int a;
    cout<<"enter a no ";
    cin>>a;
    fact(a);
    return 0;
}