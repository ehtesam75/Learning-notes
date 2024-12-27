#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

const int n = 1e6;
vector <int> b(n);	//will cosume 4MB
bitset<n> bs;	//will cosume 125KB
vector <bool> vec;	// will cosume 125KB; cuz vector bool takes 1 bit in every element
bool arr[n]; 	//will cosume 1MB; cuz array bool takes 8bit/1bytes in every element


//in general cf has 256MB mem limit
//so we can have 6.4e7 integer element in an arr without having MLE ( 4x/10^6 = 256 or x = 6.4e7)
//if we use bitset then we can have 6.4e7 * 32 element in a bitset (cuz 1 int has 32 bits)


//we will make a stack using structure and vector
struct Stack{
	vector <int> v;
	void push(int n){
		v.push_back(n);
	}

	int top(){
		if(v.empty()){
			 cout << "Stack is empty" << endl;
			 return -1;
		}
		else return v.back();
	}

	void pop(){
		if(v.empty()) cout << "Can't perform pop" << endl;
		else v.pop_back();
	}

	//we can also work with size, if stack empty here with vector
};


struct Queue{
	//we will make a queue with array and stuct
	//const int x = 1000;
	int arr[n];
	int start = 1, end = 0;

	void push(int n){
		end++;
		arr[end] = n;
	}

	void pop(){
		if(start > end){
			cout << "Queue is empty" << endl;
			return;
		}
		start++;
	}

	int front(){
		if(start > end){
			cout << "Queue is empty" << endl;
			return -1;
		}
		return arr[start];
	}

	int back(){
		if(start > end){
			cout << "Queue is empty" << endl;
			return -1;
		}
		return arr[end];
	}

	int size(){
		return end - start + 1;
	}

	bool empty(){
		return start > end;
	}
};

struct Deque{
	int arr2[2*n];
	int start = n, end = n - 1;
	void push_front(int x){
		arr2[--start] = x;
	}

	void push_back(int x){
		arr2[++end] = x;
	}

	void pop_front(){
		if(start > end){
			cout << "Deque is empty" << endl;
		}
		else start++;
	}

	void pop_back(){
		if(start > end){
			cout << "Deque is empty" << endl;
		}
		else end--;
	}

	//more on the website 
};


//make a priority queue using vector and structure


struct Set{
	//now we will make a custom set
	vector <int> vec;

	int find_index(int x){
		auto it = find(vec.begin(), vec.end(), x);
		if(it == vec.end()){
			return -1;
		}
		return it - vec.begin();
	}

	void push_back(int x){
		if(find_index(x) != -1) 
			return;
		else{
			vec.push_back(x);
			sort(vec.begin(), vec.end());
		}
	}

	bool empty(){
		return vec.empty();
	}

	void erase(int x){
    	auto it = find(vec.begin(), vec.end(), x);
    	if(it == vec.end()){
    	    cout << "Element not found in the set" << endl;
    	    return;
    	}
    	vec.erase(it);
	}

};

int main(){
	//custom stack
	Stack st;
	st.push(30);
	st.push(40);
	st.push(50);

	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;


	//custom queue
	Queue qe;
	qe.push(80);
	qe.push(90);
	qe.push(100);

	cout << qe.front() << endl; //80
	qe.pop();
	cout << qe.front() << endl; //90
	cout << qe.back() << endl; //100
	cout << qe.size() << endl;	//2
	cout << qe.empty() << endl;  //not empty; 0

	qe.pop();
	qe.pop();
	cout << qe.front() << endl;


	//custom set
	Set stt;
	stt.push_back(89);
	stt.push_back(60);
	stt.push_back(98);

	stt.erase(87);
	cout << stt.find_index(70) << endl ;
	cout << stt.find_index(60) << endl ;
	stt.erase(89);
	cout << stt.find_index(98) << endl ;

}