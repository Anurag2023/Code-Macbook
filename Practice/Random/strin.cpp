#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
    
	cin >> t;
    vector<string>ans;
	while(t--){

    
        string sentence = "";
		string s;
		cin >> s;
		int len = s.length();
		if (len <= 10) {
			ans.push_back(s);
		}
		else
		{
			sentence+=s[0];
            sentence+=(to_string(len-2));
            sentence+=s[len-1];           
			ans.push_back(sentence);
		}
    }
    for(auto i : ans){
        cout<<i<<"\n";
    }
	return 0;

}