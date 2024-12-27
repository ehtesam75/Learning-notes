#include <iostream>
using namespace std;

void update(int *p){
    *p = (*p) * 2;
}

void increment(int **p){
    ++(**p);
}

int main(){
    int a = 4;
    int *p = &a;
    int *q = p; //copied p to q
    (*q)++;
    cout<< a <<endl;

    //2nd, a=5
    cout << (*q)++ <<" ";
    cout<< a <<endl;

    //3rd
    int *x = 0; //null pointer
    int first = 34;
    x = &first;
    cout<< *x <<endl;

    //4th
    int second = 3;
    int third = 6;
    int *fourth = &third;
    second = *fourth;
    *fourth = *fourth + 2;
    cout << second << " " << third <<endl;

    //5th
    float f = 12.5;
    float g = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = g;
    cout << *ptr << " " << f << " " << g <<endl;

    //6th
    int arr[] = {11, 33, 99, 32};
    cout << *(arr) << " " << *(arr+1) <<endl;

    //7th
    cout << arr << " " << &arr << " " << &arr[0] << endl;

    //8th
    cout << arr+1 <<endl;   //1 int block after arr[0]

    //9th
    int *ptr2 = arr;
    cout << ptr2[2] <<endl; //p[2] means *(p+2)..just like the concept of arr

    //10th
    //int *ptr3 = arr++;    //error; arr = arr+1 isn't possible, Arrays are not modifiable lvalues, which means you cannot change their memory location or size once they are defined...can create a pointer to go to the second element like: int *ptr = arr; ptr++; 
    //cout << *ptr << endl; 

    //11th
    char ch = 'a';
    char *ptr4 = &ch;
    ch++; 
    cout << *ptr4 <<endl;

    //12th
    char arr2[] = "abcde";
    char *o = &arr2[0];
    cout << o << endl;

    //13th
    o++;
    cout << o <<endl;

    //14th
    char str[] = "aleen";
    char *r = str;
    cout << str[0] << " " << r[0] << endl;

    //15th
    int i=10;
    update(&i);
    cout << i <<endl;

    //16th
    int z = 110;
    int *pp = &z;
    int **dd = &pp;
    int xy = (**dd)++ + 9;
    cout << z << " " << xy <<endl;

    //17th
    int qq = 100;
    int *n = &qq;
    int **b = &n;
    int fir = ++(**b);
    int *t = *b;
    ++(*t);
    cout << qq <<" " <<fir <<endl;


    //18th
    int num = 110;
    int *ptr5 = &num;
    increment(&ptr5);
    cout << num <<endl;

    return 0;
}