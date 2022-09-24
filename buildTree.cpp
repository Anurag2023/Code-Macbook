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
    cout<<"enter data to the left of "
	root -> left = buildTree(root -> left);
	root -> right = buildTree(root -> right);
	return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<temp;
        if(root -> left)
            q.push(root -> left);
        if(root -> right)
            q.push(root -> right);
    }
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

	node* root = NULL;
	buildTree(root);
	//printTree(root);


	return 0;
}