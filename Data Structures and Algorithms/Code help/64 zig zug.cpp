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

vector<int> zig_zag_traversal(node* root){
	//for this
	//tc : o(n) each node is visited only once
	//sc : o(n)
	// 	Space used by queue = O(width of tree) = O(n) in worst case.
	// Space used by temp = O(number of nodes at current level) = O(n) in worst case.

    vector<int> v;
    queue<node*> q;
    q.push(root);
    bool left_to_right = 1; 

    while(!q.empty()){
        int size = q.size();
        vector<int> temp(size);
        for(int i = 0; i < temp.size(); i++){
            node* cur = q.front();
            q.pop();

            int index = left_to_right ? i : size - i - 1;
            temp[index] = cur->data;

            if(cur->left){
                q.push(cur->left);
            }
            if(cur->right){
                q.push(cur->right);
            }
        }

        left_to_right = !left_to_right;
        for(auto x : temp){
            v.push_back(x);
        }
    }
    return v;
}

int main(){
    node* root = NULL;
    buildTree(root);
    vector<int> v = zig_zag_traversal(root);

	for(auto x : v){
		cout << x << ' ';
	} cout << endl;
}