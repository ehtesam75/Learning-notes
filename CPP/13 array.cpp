#include<iostream>
using namespace std;

int main(){
    int array[5] = {2, 4, 6 , 8, 10};
    array[3] = 218;     //can change the value of an elemnent of an array

    for (int i = 0; i <= 4; i++)
    {
        cout<<"array["<<i<<"]: "<<array[i]<<endl;
    }
    

    // array with pointe arthimatic

    int *ptr = array;

    cout<<"*(ptr++): "<<*(ptr++)<<endl;
    cout<<"*(++ptr): "<<*(++ptr)<<endl;

    ptr = array;    //re-start from the 1st element, try commenting out to see difference

    for (int i = 0; i <= 4; i++)
    {
        cout<<*(ptr+i)<<"\t";
    }
    
    return 0;
}