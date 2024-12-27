#include <iostream>
#define ll long long
using namespace std;

class node{
public:
	int data;
	node* next;
	node* prev;

	node(int d){
		this-> data = d;
		this->next = NULL;
		this->prev = NULL;
	}

	~node(){
		int value = this->data;
		cout << "Node with value : " << value << " is deleted" << endl;
	}

};

void insert_at_head(node* &head, node* &tail, int d){

	if(head == NULL){
		node* temp = new node(d);
		head = temp;
		tail = temp;		
		return;
	}

	node* temp = new node(d);
	temp->next = head;
	head->prev = temp;
	head = temp;
}

void insert_at_tail(node* &head, node* &tail, int d){

	if(tail == NULL){
		node* temp = new node(d);
		head = temp;
		tail = temp;
		return;
	}

	node *temp = new node(d);
	
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
}

void insert_at_position(node* &head, node* &tail, int pos, int d){
	if(pos == 1){
		insert_at_head(head, tail, d);
		return;
	}

	int cnt = 1;
	node* temp = head;

	while(cnt < pos-1){
		temp = temp -> next;
		cnt++;
	}

	if(temp->next == NULL){
		insert_at_tail(head, tail, d);
		return;
	}

	node* node_to_insert = new node(d);
	node_to_insert->next = temp->next;
	temp->next->prev = node_to_insert;
	node_to_insert->prev = temp;
	temp->next = node_to_insert;
}

void print_linked_list(node* &head){
	node* temp = head;
	while(temp != NULL){
		cout << temp->data << ' ';
		temp = temp->next;
	}

	cout << endl;
}

void delete_node_pos(node* &head, node* &tail, int pos){

	if(pos == 1){
		//deleting head
		node* temp = head;
		head->next->prev = NULL;
		head = head->next;
		delete temp;
		return;
	}

	int cnt = 1;
	node* previous = NULL;
	node* current = head;
	while(cnt < pos){
		previous = current;
		current = current->next;
		cnt++;
	}

	previous->next = current->next;
	if(current->next == NULL)
		tail = previous;	//updating tail, when tail is deleted
	else
		current->next->prev = previous;	//when any node other than head or tail get deleted

	delete current;
}

int main(){
    //node* node_1 = new node(45);
    node* head = NULL;
    node* tail = NULL;	//say at the begaining there was no node; try the same thing with singly linked list

    insert_at_head(head, tail, 78);
    print_linked_list(head);

    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);
    print_linked_list(head);

    cout << "Head: " << head->data << " Tail: " << tail->data << endl;

    insert_at_position(head, tail, 4, 99);
    print_linked_list(head);

    insert_at_position(head, tail, 1, 50);
    print_linked_list(head);

    insert_at_position(head, tail, 2, 60);
    print_linked_list(head);
    cout << "Head: " << head->data << " Tail: " << tail->data << endl;


    delete_node_pos(head, tail, 6);
    print_linked_list(head);
    delete_node_pos(head, tail, 1);
    print_linked_list(head);
    cout << "Head: " << head->data << " Tail: " << tail->data << endl;
}