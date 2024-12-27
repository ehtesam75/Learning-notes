#include <iostream>
#include <stack>
#define ll long long
using namespace std;

void insert_at_bottom(stack<int> &st, int element){
	if(st.empty()){
		st.push(element);
		return;
	}

	int top_data = st.top();
	st.pop();
	insert_at_bottom(st, element);
	st.push(top_data);
}

void revrese_stack_using_recursion(stack<int> &st){
	if(st.empty()){
		return;
	}

	int top_element = st.top();
	st.pop();
	revrese_stack_using_recursion(st);
	insert_at_bottom(st, top_element);
}

void sorted_Insert(stack<int> &st, int element){
	if(st.empty() or (!st.empty() and st.top() < element)){
		st.push(element);
		return;
	}

	int top_data = st.top();
	st.pop();
	sorted_Insert(st, element);
	st.push(top_data);
}

void sort_stack(stack<int> &st){
	if(st.empty()){
		return;
	}

	int top_element = st.top();
	st.pop();
	sort_stack(st);
	sorted_Insert(st, top_element);
}


void printStack(stack<int> st){
	while(!st.empty()){
		cout << st.top() << ' ';
		st.pop();
	}
	cout << endl;
}

int main(){
    stack<int> st;
    st.push(50);
    st.push(20);
    st.push(30);
    st.push(90);
    printStack(st);


    revrese_stack_using_recursion(st);
    printStack(st);

    sort_stack(st);
    printStack(st);
}