#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		vector<char> ans;
		string s;
		cin >> s;
		int len = s.length();
		if (len <= 10) {
			continue;
		}
		else
		{
			ans.push_back(s[0]);
			ans.push_back('len - 2');
			ans.push_back(s[len - 1]);
			cout << ans << "\n";
		}
	}

	return 0;

}