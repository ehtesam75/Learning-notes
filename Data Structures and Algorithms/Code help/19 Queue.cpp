#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string>s;

    s.push("love");
    s.push("babber");
    s.push("kumer");

    cout<<"first element: "<<s.front()<<endl;

    s.pop();
    cout<<"first  element: "<<s.front()<<endl;

    cout<<"Size of queue: "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;
    return 0;
}