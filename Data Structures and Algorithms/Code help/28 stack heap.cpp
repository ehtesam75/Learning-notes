//heap memory is larger compared to stack
//new is used to insert anything in heap
//when we use heap memory, it says dynamic memory allocation
//int a =4; like in these process stack memory is used..is called static memorry allocation


#include <iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i =0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    //new char;   //returns a memory address created in the heap
    char* ch = new char;  //pointer is used to catch the location
    //this pointer is created in stack, 8 bytes; new char is created in heap 1 byte; in total 9 byte is used

    int* arr = new int[5]; 
    //5*4 = 20 heap memory + 8 stack memory = 28 memory

    int *ptr4 = new int;
    *ptr4 = 4;  //4 is stored in the heap memory

    cout << *ptr4 << endl;

    //int n;   cin>>n; 
    //int arr[n] = {..}
    //we shouldn't do this..cuz this arr[n] is stored in stack memory..but stack mem is smaller than heap..so letting n be inputed from user and stored in stack can cause trouble if the user entered a large number for n.so we need to decalare n in the heap, cuz heap size is way more large than stack

    int n;
    cin >> n;
    int *array = new int[n]; //perfect method

    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    int res = getSum(array, n);
    cout << res << endl;


    //WANT TO RUN THE CODE? comment out the rest of the code
    //case 1
    while(1){
        int i = 5;  //as this is a static allocation, int i will be freed everytime after the curly braces..so everytime memory will take 4 bytess
    }

    //case 2
    while(1){
        int *arr2 = new int[50];
        int *ptr = new int;     //but here, new int will store in heap, will not be automatically deleted..in the first loop it will take 4 bytes in heap..then in the next one it will take another 4 bytes (total 8 already)..will continue to consume memory and lead to the program crushed (but note: here int *ptr is created in stack of 8 bytes memo, which will be freed each time after the closing carley barce)
        delete ptr; //actually freeing memory after usage; delete manually,as it doesn't delete automatically like value in stack
        delete []arr2;  //this is how we delete array
    }

    //void pointer
    //A void pointer, often referred to as a "generic pointer," is a special type of pointer that can point to an object of any data type. It is used when you need a pointer to an object but don't know the exact data type of that object in advance
    void *ptr;
    int xx = 42;
    ptr = &xx;  // Pointing the void pointer to an integer

    char cc = 'a';
    ptr = &cc;    // And now it's pointing to a character

    // To use the data pointed to by the void pointer, you need to cast it back to the appropriate data type:
    int *ptrint = (int*) ptr;
    //When using a void pointer, you must explicitly cast it to the correct data type before dereferencing it. Failure to do so can lead to undefined behavior or memory access violations.


    //address type casting
    //Address typecasting is a technique where you convert a pointer of one data type into a pointer of another data type
    int x = 3;
    double y = 3.55;

    int *intptr = &x;
    double *doubleptr = &y;

    double *newdoubleptr = reinterpret_cast<double*>(intptr);

    double value = *newdoubleptr;

    cout << value;


    //in static memory allocation (in stack), memory is relased automatically, but in dynamic mem alloc, memory need to be released menually
    int *a = new int;
    delete a;   //memory allocated for the int object pointed to by a will be deallocated
    a = nullptr;    //nullptr provides a type-safe way to represent a pointer that does not point to any memory location
    //we have to set a to nullptr to avoid any potential issues with accessing deallocated memory
    return 0;
}