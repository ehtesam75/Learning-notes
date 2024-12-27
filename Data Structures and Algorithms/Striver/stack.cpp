//LIFO: Last in first out; the guy who went last is the guy who will come out first

#include <iostream>
#include <stack>

using namespace std;

int main(){
    //main 3 func in stack:
    //push, top, pop (all of these has a complexity of O(1))
    stack<int>st;
    st.push(5);
    st.push(3);
    st.push(2);
    st.push(8);

    cout<<st.top()<<endl;

    st.pop();   //will delete 8
    cout<<st.top()<<endl;

    cout<<st.size()<<endl;
    cout<<"is st is empty? : "<<st.empty()<<endl;

    stack<int>st1;
    stack<int>st2;

    st1.push(3);
    st1.push(8);
    st1.push(9);

    st2.push(7);
    st2.push(69);
    st2.push(4);

    st1.swap(st2);

    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();  //will delete top aka 4 (at first)
    }

    return 0;
}