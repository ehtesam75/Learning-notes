#include <iostream>
#define ll long long
using namespace std;

class MyCircularQueue {
    int size;
    int *arr;
    int front;
    int rear;

public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    
    bool enQueue(int value) {
        if((front == 0 && rear == size-1) or (rear+1) % size == front){
            return 0;
        }
        else if(front == -1){
            front = 0;
            rear = 0;
            arr[rear] = value;
        }
        else if(front != 0 && rear == size-1){
            rear = 0;
            arr[rear] = value;
        }
        else{
            rear = rear + 1;
            arr[rear] = value;
        }
        return 1;
    }
    
    bool deQueue() {
        if(front == -1){
            return 0;
        }
        else if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front += 1;
        }
        return 1;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        else return arr[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        else return arr[rear];
    }
    
    bool isEmpty() {
        if(front == -1){
            return 1;
        }
        else return 0;

    }
    
    bool isFull() {
        if((front == 0 && rear == size-1) or (rear + 1)%size == front){
            return 1;
        }
        else return 0;
    }
};


int main(){
    
}


/*
more queue:

1. input restricted queue:
	- push_back
	- pop_front (new)
	- pop_back
2. output restricted queue:
	- push_back
	- push_front (new)
	- pop_back

3. doubly ended queue:
	- push_back
	- push_front (new)
	- pop_front (new)
	- pop_back

	will find about it in details in the upcoming file

*/