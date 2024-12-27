/*
when you define a class, memory is not automatically allocated for objects of that class.
Memory for objects is allocated when you create an instance (an object) of the class, either by declaring it as a local variable, a global variable, or dynamically allocating it using the new keyword.

*/

#include<iostream>
using namespace std;

class shop{
    int counter;
    int price[100];
    int serialNo[100];
    public:
        void initiaCounter(void) {counter = 0;};
        void setPrice(void);
        void displayPrice(void); 
};

void shop::setPrice(void){
    cout<<"Enter the Serial Number of the product "<<counter+1<<":"<<endl;
    cin>>serialNo[counter];
    cout<<"Enter the price of the product "<<counter+1<<";"<<endl;
    cin>>price[counter];
    counter++;
}

void shop::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Price of product number " <<serialNo[i]<<" is "<<price[i]<<endl; 
    }
    
}
int main(){
    shop s1;
    s1.initiaCounter();
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.displayPrice();

    return 0;
}