#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main() {
    struct node *head, *newNode, *temp, *again, *x, *y, *random, *randomPro, *z;
    head = 0;
    int choice;
    scanf("%d", &choice);

    while(choice){
        newNode = (struct node*) malloc(sizeof(struct node));
        printf("Enter a data: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;
        if(head == 0){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }

        printf("enter your choice: ");
        scanf("%d", &choice);
    }

    temp = head;

    while(temp != 0){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    //insert at begin
    struct node *new = (struct node*) malloc(sizeof(struct node));
    new->data = 235;
    new->next = head;
    head = new;

    again = head;
    printf("\n\n");
    while(again != 0){
        printf("%d ", again->data);
        again = again->next;
    }


    //insert at end
    struct node *end = (struct node*) malloc(sizeof(struct node));
    end->data = 909;
    end->next = NULL;

    y = head;
    while(y->next != 0){
        y = y->next;
    }
    y->next = end;

    //priting
    x = head;
    printf("\n");
    while(x != NULL){
        printf("%d ", x->data);
        x = x->next;
    }


    //insert at random pos
    int pos, i=1;
    printf("\nEnter a position: ");
    scanf("%d", &pos);

    random = head;
    while(i<pos){
        random = random->next;
        i++;
    }
    randomPro = (struct node*) malloc(sizeof(struct node));
    randomPro->data = 666;
    randomPro->next = random->next;
    random->next = randomPro;

    //priting
    z = head;
    printf("\nInsert a specific position: ");
    while(z != NULL){
        printf("%d ", z->data);
        z = z->next;
    }
    return 0;
}