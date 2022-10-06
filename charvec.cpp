#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
int main(){
    node* root = new node(10);
    if(root -> next)
        cout<<"hello bitches ";
    else if(!root -> next)
        cout<<"fuck you noob";
    return 0;
}