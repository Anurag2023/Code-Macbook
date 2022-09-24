#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this -> data = data;
		this -> left = NULL;
		this -> right = NULL;
	}
};

node* buildTree(node* root) {
	cout << "enter value ";
	int data;
	cin >> data;
	root = new node(data);
	if (data == -1)
		return NULL;
	root -> left = buildTree(root -> left);
	root -> right = buildTree(root -> right);
	return root;
}
/*
void printTree(node* root) {
	queue<node*>q;
	q.push(root);
	while (!q.empty()) {
		vector<int> vec;
		for (int i = 0; i < q.size(); i++) {
			vec.push_back(q.front());
			q.pop();
			if (root -> left)
			{
				q.push(root -> left);
			}
			if (root -> right)
				q.push(root -> right);
		}
	}
	for (auto i : vec)
		cout << i << " ";
}
*/

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	node* root = NULL;
	buildTree(root);
	//printTree(root);


	return 0;
}