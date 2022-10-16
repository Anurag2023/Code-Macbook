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
    cout<<"enter data to the left of "<<data<<endl;
	root -> left = buildTree(root -> left);
    cout<<"enter data to the right of "<<data<<endl;
	root -> right = buildTree(root -> right);
	return root;
}
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    
    while(!q.empty()){
        node* temp = q.front();
        cout<<temp -> data<<" ";
        q.pop();
        
        if(temp -> left)
            q.push(temp -> left);
        if(temp -> right)
            q.push(temp -> right);
    }
    //cout<<endl;
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
    levelOrderTraversal(root);

	return 0;
}