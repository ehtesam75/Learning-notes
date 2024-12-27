#include <iostream>
#define ll long long
using namespace std;

class queue{
	int front_index, rear, size;
	int *arr;

public:
	queue(int size){
		this->size = size;
		arr = new int[size];
		front_index =  0;
		rear = 0; 
	}

	~queue(){
		delete []arr;
	}

	void push(int x){
		if(rear < size){
			arr[rear] = x;
			rear += 1;
		}
		else{
			cout << "Queue overflow" << endl;
		}
	}

	bool empty(){
		return rear == front_index;
	}

	int front(){
		if(empty()){
			cout << "Queue is empty" << endl;
			return -1;
		}
		else{
			return arr[front_index];
		}
	}

	int back(){
		if(rear == front_index){
			cout << "Queue is empty" << endl;
			return -1;
		}
		else{
			return arr[rear-1];
		}
	}

	void pop(){
		if(rear == front_index){
			cout << "Queue underflow" << endl;
		}
		else{
			front_index = front_index+1;
			if(front_index == rear){
				front_index = rear = 0;
			}
		}
	}

	friend void print(queue &obj);
};

void print(queue &obj){
	if(obj.empty()){
		cout << "No item is in the queue" << endl;
	}

	else{
		int temp = obj.front_index;
		while(temp < obj.rear){
			cout << obj.arr[temp] << ' ';
			temp++;
		}
		cout << endl;
	}
}

int main(){

    queue qe(5);
    qe.push(5);
    qe.push(9);
    qe.push(15);
    qe.push(20);
    qe.push(66);

    print(qe);

    cout << qe.front() << endl;
    cout << qe.back() << endl;

    qe.pop();
    qe.pop();
    qe.pop();
    qe.pop();
    qe.pop();
    print(qe);


    cout << qe.front() << endl;
    cout << qe.back() << endl;
}