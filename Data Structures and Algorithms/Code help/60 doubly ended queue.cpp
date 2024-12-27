#include <iostream>
#include <queue>
#define ll long long
using namespace std;

//doubly ended queue implementation
class MyCircularDeque {
    int size;
    int *arr;
    int front;
    int rear;

public:
    MyCircularDeque(int k) {
        size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    
    bool insertFront(int value) {
        if((front == 0 && rear == size-1) or (rear+1)%size == front){
            return 0;
        }
        else if(front == -1){
            front = rear = 0;
            arr[front] = value;
        }
        else if(front == 0){
            front = size-1;
            arr[front] = value;
        }
        else{
            front = front -1;
            arr[front] = value;
        }
        return 1;
    }
    
    bool insertLast(int value) {
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
    
    bool deleteFront() {
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
    
    bool deleteLast() {
        if(front == -1){
            return 0;
        }
        else if(front == rear){
            front = rear = -1;
        }
        else if(rear == 0){
            rear = size-1;
        }
        else{
            rear = rear -1;
        }
        return 1;
    }
    
    int getFront() {
        if(!isEmpty())
            return arr[front];
        else return -1;
    }
    
    int getRear() {
        if(!isEmpty())
            return arr[rear];
        else return -1;
    }
    
    bool isEmpty() {
        if(front == -1){
            return 1;
        }
        else return 0;
    }
    
    bool isFull() {
        if((front == 0 && rear == size-1) or (rear+1) % size == front){
            return 1;
        }
        else return 0;
    }
};


int main(){
    //stl version of doubly ended queue: deque;

    deque<int> dq;

    dq.push_back(9);
    dq.push_front(6);

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_back();

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_back();

    if(dq.empty()){
    	cout << "deque is empty" << endl;
    }
}