#include <stdio.h>
#include <string.h>

union myData{
    int x;
    int roll;
    char name[40];
};

typedef struct{
    int type;
    union{
        char x[1024];
        float y[1024];
        double z[1024];
    } buffer;
} info;


int main() {
    //in union, we can only use one member at a time..previous member's data will be overwrite by current one
    union myData data1;
    data1.x = 5;
    data1.roll = 45;
    strcpy(data1.name, "aleen");

    printf("%d\n", data1.x);
    printf("%s\n", data1.name);      // didn't understand the reason of output here
    printf("%d\n", data1.roll);
    

    //but if i print out right after i initilize?
    data1.x = 5;
    printf("%d\n", data1.x);

    data1.roll = 45;
    printf("%d\n", data1.roll);

    strcpy(data1.name, "aleen");
    printf("%s\n", data1.name);

    printf("size of mydata: %d\n", sizeof(data1));       //size of the largest element


    //pointer to union
    union myData *ptr = &data1;
    printf("ptr->x = %d\n", ptr->x);
    printf("ptr->name = %d\n", ptr->name);      //reason of the output?



    //last topic
    info information;

    information.type = 1;
    memset(information.buffer.x, 't', 1024);
    if(information.type == 0){
        for(int i = 0; i<1024; i++){
            printf("information.buffer.x[%d] = %c\n", i, information.buffer.x[i]);
        }
    }


    return 0;
}