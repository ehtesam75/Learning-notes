#include <iostream>
using namespace std;

void update(int **ptr){
    //try keeping one at time to see output
    //recomended to watch this part of the video
    ptr = ptr + 1;  //no change in main function..cuz its pass by vlaue (note: the next 2 line will also work with pass by vlaue, but those line directly access the vlaue in main function using *)
    // *ptr = *ptr + 1;    //will increase by 4..pointing to next int block
    // **ptr = **ptr + 1;   //will increase the value by 1
}

int main(){
    int a = 5;
    int* p = &a;    //storing data type (int) + *
    int** p2 = &p;  //storing data type (int*) + *

    cout<< *p <<endl;
    cout<< **p2 <<endl;
    cout<< *p2 << " " << &a << " " << p << endl;
    
    cout<<"before: "<<endl;
    cout<< a <<endl;
    cout<< p <<endl;
    cout<< p2 <<endl;

    cout<<"after: "<<endl;
    update(p2);
    cout<< a <<endl;
    cout<< p <<endl;
    cout<< p2 <<endl;

    
    return 0;
}