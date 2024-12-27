/*
array - can not increase size in runtime
vector - can increase, but a copy of original array is made and move it to double size vector; so not efficeint
linked list - dynamic + no wastage of memory
			- in insertion and deletion no shift needed

*/


//singly linked list

#include <iostream>
#define ll long long
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~node(){
    	int value = this->data;
    	cout << "Memory is deleted for node with data : " << value << endl; 
    }
};

void insert_at_head(node*& head, int d) {
    // Create a new node
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insert_at_tail(node*& tail, int d) {
    node* temp = new node(d);
    tail->next = temp;
    tail = temp; // Update the tail
}

void insert_at_position(node*& head, node*& tail, int pos, int d) {
    // If inserting at the first position
    if (pos == 1) {
        insert_at_head(head, d);
        return;
    }

    node* temp = head;
    int count = 1;

    // Traverse to the position before the insertion point
    while (count < pos - 1) {
        temp = temp->next;
        count++;

        if (temp == NULL) {
            cout << "Position out of bounds" << endl;
            return; // Position goes out of bounds
        }
    }

    if(temp->next == NULL){
    	insert_at_tail(tail, d);
    	return;
    }

    node* node_to_insert = new node(d);
    node_to_insert->next = temp->next;
    temp->next = node_to_insert;

    // Update tail if inserted at the endl , from chatgpt; already handled this case; not commented out
    // if (node_to_insert->next == NULL) {
    //     tail = node_to_insert;
    // }
}

void print_linked_list(node* head) {
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << ' ';
        temp = temp->next;
    }

    cout << endl;
}


void delete_node_pos(node* &head, node* &tail, int pos){

	if(pos == 1){
		//deleting the first node
		node* temp = head;
		head = head->next;
		delete temp;
	}

	else{
		//deleting any node other than the first (can be last too)
		node* curr = head;
		node* prev = NULL;

		int count = 1;
		while(count < pos){
			prev = curr;
			curr = curr->next;
			count++;
		}

		prev->next = curr->next;
		if(curr->next == NULL){
			//updating tail, if the node to be deleted is the last node
			tail = prev;
		}
		delete curr;
	}
}


void delete_node_value(node* &head, node* &tail, int x){

	if(head->data == x){
		node *temp = head;
		head = head->next;
		delete temp;
		return;
	}

	node *curr = head;
	node* prev = NULL;

	while(curr->data != x){
		prev = curr;
		curr = curr->next;
	}

	prev->next = curr->next;
	if(curr->next == NULL){
		//updating tail, if the node to be deleted is the last node
		tail = prev;
	}
	delete curr;
}

int main() {
    node* node_1 = new node(56);
    node* head = node_1;
    node* tail = node_1;
    print_linked_list(head);

    insert_at_head(head, 78);
    insert_at_head(head, 99);
    print_linked_list(head);

    insert_at_tail(tail, 90);
    insert_at_tail(tail, 125);
    print_linked_list(head);

    insert_at_position(head, tail, 3, 100);
    print_linked_list(head);
    insert_at_position(head, tail, 9, 70);
    print_linked_list(head);
	insert_at_position(head, tail, 7, 70);
    print_linked_list(head);


    cout << "Head: " << head->data << ' ' << "Tail: " << tail->data << endl;

    delete_node_pos(head, tail, 5);
    print_linked_list(head);

    cout << "Head: " << head->data << ' ' << "Tail: " << tail->data << endl;


    delete_node_value(head, tail, 99);
    print_linked_list(head);
    cout << "Head: " << head->data << ' ' << "Tail: " << tail->data << endl;
    // Cleaning up the allocated memory
    // node* current = head;
    // while (current != NULL) {
    //     node* next = current->next;
    //     delete current;
    //     current = next;
    // }
}
