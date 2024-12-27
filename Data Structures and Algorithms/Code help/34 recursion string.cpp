#include <iostream>
#include <string>
using namespace std;

void reverse(string str, int size){
    if(size == 0) return;
    cout << str[size-1];
    return reverse(str, size-1);
}

void reverse2(string str){
    if(str.length() == 0) return;
    return reverse2(str.substr(1)); // Pass the substring starting from the second character
    cout << str[0];
}   //why it's not working?? isn't it head recursion?

void reverse3(int i, int j, string& str){
    if(i>j) return;
    swap(str[i], str[j]);
    return reverse3(++i, --j, str);
}

void reverse4(int i, string& str){
    if(i>=str.length()/2) return;
    swap(str[i], str[str.length()-1-i]);
    return reverse4(++i, str);
}

bool palindrom(int i, string str){
    int n = str.length();
    if(i >= n) return true;
    if(str[i] != str[n-i-1])
        return false;
    return palindrom(++i, str);
}

int power(int n, int m){
    if(m==1) return n; 
    else return n * power(n, m-1);
}

int power1(int a, int b){
    if(b == 1) return a;
    if(b % 2 == 0)
        return power1(a, b/2) * power1(a, b/2);
    else 
        return a * power1(a, b/2) * power1(a, b/2);
}

int main(){
    //reverse
    string str = "aleen";
    int size = str.length(); 
    reverse(str, size);
    cout << endl;
    reverse2(str);

    reverse3(0, size-1, str);
    cout << str << endl;

    reverse4(0, str);
    cout << str << endl;    //it will print "aleen"


    //palindrom
    string str1 = "abnlba";
    cout << "isPalindrom: " << palindrom(0, str1) << endl;


    //power
    int x = 2, y = 5;
    cout << power(x, y) << endl;

    cout << power1(x, y) << endl;
    return 0;
}