#include <iostream>
#include <queue>
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


void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout << "Enter data for root: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout << "Enter data for left node of " << temp->data << " :" << endl;
        cin >> data;
        if(data != -1){
            temp->left = new node(data);
            q.push(temp->left);
        }

        cout << "Enter data for right node of " << temp->data << " :" << endl;
        cin >> data;
        if(data != -1){
            temp->right = new node(data);
            q.push(temp->right);
        }
    }
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


void heightOfATree(node* root){
    
}

//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

int main(){
    node* root = NULL;
    buildFromLevelOrder(root);
    levelOrderTraversal(root); //printing
}