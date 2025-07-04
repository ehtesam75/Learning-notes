
bool isAdult = true;

void main() {
    //if statement
    int age = 17;
    if (age > 18) {
        print('Adult');
    } else if (age == 18) {
        print('Just became an adult');
    } else {
        print('Minor');
    }

    // bool isAdult = true;
    if(isAdult)
        print('Adult');
    else
        print('Minor');
    //giving warning cuz of dead code (gloabal section commented out)
    //what happens is compiler knows isAdult is true, so it will never execute the else block
    //but if we move isAdult to the gloabal scope, then it will not give warning
    //cuz it will not know the value of isAdult at compile time


    //ternary operator
    String res = 'lol';
    String status = res.startsWith('l') ? 'yes' : 'no';
    print(status);


    //switch statement
    String day = 'Tuesday';
    switch (day) {
        case 'sunday':
            break;
        case 'Monday':
            print('Its monday');
            break;
        case 'Tuesday' when age < 18:   //both have to true to execute this case
            print('tuesday');
            break;
        case 'Wednesday':
            print('its wednesday');
            break;
        default:
            print('some other day or Invalid day');
    }
}