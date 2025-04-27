#include <bits/stdc++.h>
#define ll long long
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(node* &root){
    cout << "Enter data: " << endl;
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    root = new node(data);

    cout << "Enter data for inserting in the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in the right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void zig_zag_traversal(node* root){
	queue<node*> q;
	q.push(root);
	bool leftToRight = 1;

	while(!q.empty()){
		node* current = q.front();
		q.pop();
		cout << current->data << ' ';
		if(leftToRight){
			if(current->right){
				q.push(current->right);
			}
			if(current->left){
				q.push(current->left);
			}
			leftToRight = 0;
		}

		else{
			if(current->left){	
				q.push(current->left);
			}
			if(current->right){
				q.push(current->right);
			}
			leftToRight = 1;
		}
	}
}

int main(){
    node* root = NULL;
    buildTree(root);
    zig_zag_traversal(root);
}