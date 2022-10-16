#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n > 8) {
			cout << "greater";
			//continue;
		}
		else
		{
			cout << "not grater";
			//continue;
		}
	}

	return 0;

}