#include <iostream>
#define ll long long
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int x){ 
		data = x;
		next = NULL;
	}
};

class stack{
	node* top;
public:
	stack(){
		top = NULL;
	}

	void push(int val){
		node* newNode = new node(val);
		newNode->next = top;
		top = newNode;
	}

	bool empty(){
		return top == NULL;
	}

	int peak(){
		if(!empty()){
			return top->data;
		}
		else{
			return -1;
		}
	}

	void pop(){
		if(top == NULL){
			cout << "Stack underflow" << endl;
		}

		node* temp = top;
		top = top->next;
		delete temp;
	}

	void printStack(){
		if(top == NULL){
			cout << "No item" << endl;
			return;
		}

		node* temp = top;

		while(temp != NULL){
			cout << temp->data << ' ';
			temp = temp->next;
		}
		cout << endl;
	}
};

int main(){
    stack s;
    s.push(8);
    s.push(10);
    s.push(12);
    s.push(15);
    s.pop();
    cout << s.peak() << endl;
    s.printStack();

}