#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int t;
    cout<<"enter size";
	cin >> t;
	while (t--) {
		vector<char> ans;
        string sentence = "";
		string s;
		cin >> s;
		int len = s.length();
		if (len <= 10) {
			continue;
		}
		else
		{
			ans.push_back(s[0]);
            int p = len-2;
			ans.push_back(to_string(p));
			ans.push_back(s[len - 1]);
            for(auto i : ans){
                sentence = sentence + i;
            }
            
			cout << sentence << "\n";
		}
	}

	return 0;

}