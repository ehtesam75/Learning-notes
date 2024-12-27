#include <stdio.h>
#include <string.h>

enum day {
    Monday, thuesday, wednesdey=5, thrusday, friday=8, saturday, sunday
};

typedef enum button{
    on, off
}button;

button press(button current);
void print_button(button current);

int main() {
    enum day today = Monday;
    
    printf("today: %d\n", Monday);
    printf("thrusday: %d\n", thrusday);
    printf("sunday: %d\n", sunday);

    button power = on;
    print_button(power);
    power = press(power);
    print_button(power);
    power = press(power);
    power = press(power);
    print_button(power);
    return 0;
}

button press(button current){
    if(current == on) 
        return off;
    else    
        return on;
}

void print_button(button current){
    if(current == on)
        printf("on\n");
    else
        printf("off\n");
}