#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main() {
    struct node *head, *newNode, *temp, *curr, *del, *prev, *nextEle;
    head = 0;
    int choice=1;
    while(choice){
        newNode = (struct node*) malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = 0; 
        if(head == 0){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        printf("Enter choice: ");
        scanf("%d", &choice);
    }

    ///print
    temp = head;
    while(temp != 0){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n\n");


    //delete from begin
    temp = head;
    head = head->next;
    free(temp);
    del = head;

    if (del != NULL) {
    while (del != NULL) {
        printf("%d ", del->data);
        del = del->next;
    }
    }else{
        printf("List is empty.");
    }



    //delete the last
    curr = prev = head;
    while(curr->next != 0){
        prev = curr;
        curr = curr->next;
    }

    if(curr == head){   //if there is only one node
        head = 0;
    }
    else{
        prev->next = 0;
    }
    free(curr);

    //print
    temp = head;
    
    printf("\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;   
    }


    //delete specific pos
    printf("\n\n");
    printf("Enter a pos: ");
    int pos, i=1;
    scanf("%d", &pos);
    temp = head;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }

    nextEle = temp->next;
    temp->next = nextEle->next;
    free(nextEle);

    //print
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;   
    }

    return 0;
}