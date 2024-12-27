#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <set>
#define ll long long
using namespace std;

int main(){

//string
    string s(10, 'a');
    cout << s << endl;

    string str = "abcdef";
    string str2 = str.substr(2, 3); //3 elements from index 2
    // string str2 = str.substr(2); //rest of the string from ind 2
    cout << str2 << endl;

    str2 += "added";	//o(1), works like push_back()
    // str2 = str2 + "added";  //o(len(str2)) first str2 will be copied, then will add "added"
    cout << str2 << endl;


    vector<string> v = {"aleen", "joyi"};
    pair<int, vector<string>> p = {1, v};
    cout << p.second[1] << endl;


//stack
    stack<int> st;
    st.push(32);
    st.push(6);
    st.push(5);

    while(!st.empty()){
    	cout << st.top() << ' ';
    	st.pop();
    } cout << endl;


//queue
    queue<int> qu;
    qu.push(7);
    qu.push(9);
    qu.push(15);

    while(!qu.empty()){
        cout << qu.front() << ' ';
        qu.pop();
    } cout << endl;

    //qu.back() is also here


//deque...double ended queue..this is a type of queue, but you can add or remove from both end
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);

    d.push_front(2);
    d.push_front(5);
    d.pop_front();
    d.pop_back();

    for(auto x:d){
        cout << x << ' ';
    } cout << endl;

    //can access any index
    cout << d[2] << endl;
    cout << d.size() << endl;
    cout << d.front() << ' ' << d.back() << endl;

    //most of the funcs supported by vectors, can also use in queue..like sort, reverse 


//priority queue
    priority_queue <int> q; //max heap
    // priority_queue<int, vector<int>, greater<int>> q;  //min heap...min element will have priority
    //we can push minus of the elements for priority queue like min heap with max heap type declaring

    q.push(10);
    q.push(35);
    q.push(20);

    cout << q.top() << endl;    //higest value
    q.pop();    //will pop the largest value
    cout << q.top() << endl;
    //push and pop : o(logn);
    //q.top() : o(1)


//set
    //will keep uniqe + sorted very time..all is done in log(n)
    set<int> se;
    se.insert(6);
    se.insert(2);
    se.insert(9);
    se.insert(2);
    se.insert(12);

    for(set<int>::iterator it = se.begin(); it != se.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;

    se.erase(6);
    se.erase(se.begin());

    //or i can use range based for loop
    for(int x: se){
        cout << x << ' ';
    } cout << endl;

    set<int>::iterator it = se.find(30);
    //se.erase(it);
    cout << *it << endl; //will not find the index,just the value; there's nothing called index in set..set is bidirectional



    //UPPER BOUND AND LOWER BOUND OF SET 
    /*
    arr = 1 2 2 2 3 3 3 5 6 9
    arr has to sorted for this

    lower bound of 3 = index 4 (first index that is >= 3)
    upper bound of 3 = index 7 (first index that is >3)
    how many times 3 occured = upper bound - lower bound

    */

    auto it2 = se.lower_bound(12);
    cout << *it2 << endl;



//unorder set
    //just like set but order doesn't matter
    //in cp, we don't need it


//multiset
    //sorted , but not uniqe; impt in cp
    multiset<int> ms;
    ms.insert(31);
    ms.insert(5);
    ms.insert(5);
    ms.insert(7);

    for(auto x : ms){
        cout << x << ' ';
    } cout << endl;

    ms.erase(5); //all the 5 will be erased
    //i can use iterator to remove single one
    // auto it3 = ms.find(5);
    // ms.erase(it3);

}