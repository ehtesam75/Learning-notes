#include <iostream>
#include <queue>
#include <stack>
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

node* buildTree(node* root){
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

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << ' ';
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }   
    }
}

void reverseLevelOrderTraversal(node* root){
    queue<node*> q;
    stack<int> st;

    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        st.push(temp->data);

        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
    }

    while(!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
}

void inOrderTraversal(node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << ' ';
    inOrderTraversal(root->right);
}

void preOrderTraversal(node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << ' ';
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
    if(root == NULL){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << ' ';
}

void iterationInorder(node* root){
    node* current = root;
    stack<node*> st;

    while(current != NULL or !st.empty()){
        while(current != NULL){
            st.push(current);
            current = current->left;
        }

        current = st.top();
        st.pop();

        cout << current->data << ' ';
        current = current->right;
    }
}

void iterationPreorder(node* root){
    node* current = root;
    stack<node*> st;

    while(current != NULL or !st.empty()){
        while(current != NULL){
            st.push(current);
            cout << current->data << ' ';
            current = current->left;
        }

        current = st.top();
        st.pop();

        current = current->right;
    }
}

void iterationPostorder(node* root){
    stack<node*> s1, s2;
    s1.push(root);

    while(!s1.empty()){
        node* temp = s1.top();
        s1.pop();
        s2.push(temp);

        if(temp->left){
            s1.push(temp->left);
        }
        if(temp->right){
            s1.push(temp->right);
        }
    }

    while(!s2.empty()){
        cout << s2.top()->data << ' ';
        s2.pop();
    }
}


//7 4 2 3 -1 -1 6 -1 -1 10 7 -1 -1 8 -1 -1 3 4 5 -1 -1 6 -1 -1 -1
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

int main(){
    node* root = NULL;
    root = buildTree(root);

    cout << "Level order traversal: " << endl;
    levelOrderTraversal(root);

    cout << "Reverse Level order traversal: " << endl;
    reverseLevelOrderTraversal(root);

    cout << endl << "In order traversal: " << endl;
    inOrderTraversal(root);

    cout << endl << "Pre order traversal: " << endl;
    preOrderTraversal(root);

    cout << endl << "Post order traversal: " << endl;
    postOrderTraversal(root);

    cout << endl << "In order traversal (iteration): " << endl;
    iterationInorder(root);
    
    cout << endl << "Pre order traversal (iteration): " << endl;
    iterationPreorder(root);

    cout << endl << "Post order traversal (iteration): " << endl;
    iterationPostorder(root);
}