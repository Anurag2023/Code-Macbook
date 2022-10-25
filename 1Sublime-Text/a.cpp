#include<bits/stdc++.h>
using namespace std;

void solve(){
	stack<int>st;
	int n;
	cin>>n;
	string s;
	cin>>s;

	for(int i = 0;i<n;i++){
		if(s[i]=='Q'){
			st.push(1);
		}
		else{
			if(st.empty()){
				continue;
			}
			else{
				st.pop();
			}
		}
	}
	if(st.empty()){
		cout<<"YES"<<"\n";
	}
	else
		cout<<"NO"<<"\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}