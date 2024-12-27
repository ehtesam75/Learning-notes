#include <iostream>
#define ll long long
using namespace std;

class stack{
	//properties
	int *arr;
	int top;
	int size;

public:
	//behaviour
	stack(int size){
		this->size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element){
		if(size-top > 1){
			top++;
			arr[top] = element;
		}

		else{
			cout << "Stack overflow" << endl;
		}
	}

	void pop(){
		if(top >= 0){
			top--;
		}
		else{
			cout << "Stack underflow" << endl;
		}
	}

	bool empty(){
		if(top == -1){
			return 1;
		}
		else return 0;


	}

	int peak(){
		if(top >= 0)
			return arr[top];
		else{
			cout << "Stack is empty" << endl;
			return -1;
		}
	}
};

void printStack(stack s){
	while(!s.empty()){
		cout << s.peak() << ' ';
		s.pop();
	}
	cout << endl;
}

int main(){
    stack s(4);
    s.push(5);
    s.push(8);
    s.push(10);
    
    s.pop();

    printStack(s);
    cout << s.peak() << endl;

    s.pop();
    cout << s.peak() << endl;
    s.pop();
    cout << s.peak() << endl;

    if(s.empty()) cout << "Stack is empty" << endl;
}