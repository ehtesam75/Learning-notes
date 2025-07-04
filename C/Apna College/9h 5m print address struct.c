#include <stdio.h>
struct address{
    int houseNo;
    int block;
    char city[40];
    char state[40];
};
void scanAddress(struct address no[3]);
void printAddress(struct address no[3]);

int main() {
    struct address num[3];
    scanAddress(num);
    printAddress(num);
    

    return 0;
}

void scanAddress(struct address no[3]){
    for(int i =0; i<3; i++){
        printf("\n");
        printf("Enter address for person %d : \n", i+1);
        printf("Enter Your house no:");
        scanf("%d", &no[i].houseNo);
        printf("Enter Your block:");
        scanf("%d", &no[i].block);
        printf("Enter Your city:");
        scanf("%s", no[i].city);
        printf("Enter Your state:");
        scanf("%s", no[i].state);
    }
}

void printAddress(struct address no[3]){
    for(int i = 0; i<3; i++){
        printf("\n");
        printf("Address of person %d:\n", i+1);
        printf("House no: %d\t Block: %d\t City: %s\t State: %s\t ", no[i].houseNo, no[i].block, no[i].city, no[i].state);
    }
}