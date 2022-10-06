#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count = 0;
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i =0;i<n;i++){
            cin>>vec[i];
        }
        if(vec.size()==1)
        {
            cout<<0<<"\n";
            continue;
        }
        sort(vec.begin(),vec.end());
        for(int i = 1;i<n;i++){
            if(vec[i]>vec[0]){
                int k = 2;
                while(vec[i]>vec[0])
                {
                    if((vec[i]/k) < vec[i])
                    {
                        count+=k;
                    }
                    k++;
                }               
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}