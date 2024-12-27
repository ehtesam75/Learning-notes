#include <iostream>
#include <map>
#define ll long long
using namespace std;

//circular linked list

class node{
public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}

	~node(){
		cout << "value with " << this->data << " node is deleted" << endl;
	}

};


void insertNode(node* &tail, int element, int d){
	if(tail == NULL){
		node* temp = new node(d);
		tail = temp;
		temp->next = temp;
		return;
	}

	node* current = tail;
	while(current->data != element){
		current = current->next;
	}

	node* temp = new node(d);
	temp->next = current->next;
	current->next = temp;
}


void deleteNode(node* &tail, int element){
	if(tail == NULL){
		cout << "List is empty" << endl;
		return;
	}

	node* prev = tail;
	 node* curr = tail->next;
	 while(curr->data != element){
	 	prev = curr;
	 	curr = curr->next;

	 	if(curr == tail->next){
	 		cout << "Element " << element << " is not on the list" << endl;
	 		return;
	 	}
	 }

	 if(tail == curr){	//if we try to delete the tail node
	 	tail = prev;
	 }

	 if(curr == prev){	//only 1 node is present in list
	 	tail = NULL;	//if we don't write this logic then we will be deleting tail for ever and when we'll try to use tail in print func, it will cause a segmentation fault
	 }

	 prev->next = curr->next;
	 delete curr;
}

bool isCircular(node* head){
    if(head == NULL) return 1;
    else if(head->next == NULL) return 0;
    node *fast = head;
    node* slow = head;

    while(fast != NULL and fast->next != NULL){
        fast = fast->next->next;


        slow = slow->next;
        if(fast == slow){
            break;
        }
    }

    if(fast == slow and slow == head){	//slow == head check if the loop has head in it
        return 1;
    }
    else return 0;

}

bool isCircular2(node* head){
	map<node*, bool> visited;

	while(head != NULL){
		if(visited[head]){
			cout << "A cycle is presented on : " << head->data << endl;
			return 1;
		}
		visited[head] = 1;
		head = head->next;
	}
	return 0;
}

node* floyedCycleDetectionLoop(node* head){
	if(head == NULL) return NULL;

	node* slow = head;
	node* fast = head;
	while(slow != NULL and fast != NULL){
		fast = fast -> next;
		if(fast != NULL){
			fast = fast->next;
		}

		slow = slow->next;

		if(slow == fast){
			//cout << "Cycle is present at : " << slow-> data << endl;
			return slow;
		}
	}

	return NULL;
}

node* getStartingNode(node* head){
	if(head == NULL) return NULL;
	node* intersection = floyedCycleDetectionLoop(head);

	node* slow = head;

	while(slow != intersection){
		slow = slow->next;
		intersection = intersection->next;
	}

	return slow;
}

void removeLoop(node* head){
	if(head == NULL) return;

	node* start = getStartingNode(head);
	node* curr = start;
	while(curr->next != start){	
		curr = curr->next;
	}

	curr->next = NULL;
}

void print_linked_list(node* tail){
	if(tail == NULL){
		cout << "List is empty";
		return;
	}

	node* temp = tail;
	do{
		cout << tail->data << ' ';
		tail = tail->next;
	} while(tail != temp);
	cout << endl;
}

int main(){
    node* tail = NULL;
    insertNode(tail, 9, 1);
    print_linked_list(tail);
    insertNode(tail, 1, 5);
    insertNode(tail, 5, 18);
    print_linked_list(tail);
    insertNode(tail, 1, 9);
    print_linked_list(tail);
    insertNode(tail, 5, 9);
    print_linked_list(tail);
    insertNode(tail, 1, 3);
    print_linked_list(tail);

    deleteNode(tail, 9);
    print_linked_list(tail);
    deleteNode(tail, 1);
    print_linked_list(tail);
    deleteNode(tail, 9);
    print_linked_list(tail);

    cout << isCircular2(tail) << endl;	//the linked list is circular
    cout << isCircular(tail) << endl;	//the linked list is circular
    node* res = floyedCycleDetectionLoop(tail);//the linked list is circular
    cout << res->data << endl;

    cout << "loop starting node: " << getStartingNode(tail)->data << endl;

    //removing loop;
    removeLoop(tail);

    cout << isCircular2(tail) << endl;	//not circular anymore

}