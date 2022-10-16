#include<bits/stdc++.h>
using namespace std;
bool cop(int a, int b) {
	if (__gcd(a, b) == 1) {
		return true;
	}
	else
		return false;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}
		bool flag = false;
		int i, j;
		for (i = n - 1; i >= 0; i--) {
			for (j = i; j >= 0; j--) {
				if (cop(vec[i], vec[j])) {
					flag = true;
					break;
				}
			}
			if (flag) {
				break;
			}
		}
		if (!flag) {
			cout << "-1" << "\n";
		}
		else
		{
			int k = i + j + 2;
			cout << k << "\n";
		}
	}
	return 0;
}