#include<bits/stdc++.h>
using namespace std;


// PROGRAM TO REVERSE A STACK
/* void insert(stack<int>&s, int temp)
{
	if (s.empty())
	{
		s.push(temp);
		return;
	}
	int ele = s.top();
	s.pop();
	insert(s, temp);
	s.push(ele);
}

void rev(stack<int>&s) {
	if (s.size() == 1)
		return;
	int temp = s.top();
	s.pop();
	rev(s);
	insert(s, temp);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	stack<int>s;
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	rev(s);
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	return 0;

	*/
vector<vector<int>>subset(vector<int>nums) {
	vector<vector<int>>ans;
	vector<int>curr;
	ans.push_back(curr);
	for (auto i : nums)
	{
		int n = ans.size();
		for (int j = 0 ; j < n ; j++)
		{
			curr = ans[j];
			curr.push_back(i);
			ans.push_back(curr);
		}

	}
	return ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	vector<int>nums;
	int n;
	cout << "enter size ";
	cin >> n;
	for (int l = 0 ; l < n ; l++)
		cin >> nums[l];
	vector<vector<int>>answer = subset(nums);
	for (int i = 0; i < answer.size(); i++)
	{
		for (auto j : answer[i])
			cout << j << " ";
		cout << endl;
	}
	return 0;
}

