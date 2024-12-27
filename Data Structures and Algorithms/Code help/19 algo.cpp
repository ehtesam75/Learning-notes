#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int>v;

    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);

    cout<<"Finding 8: "<<binary_search(v.begin(), v.end(), 9)<<endl;    //will return true

    //lower bound: if search value is found:

    auto itr = lower_bound(v.begin(), v.end(), 9);  //will return a iterator pointing towards the searched value
    cout<<*itr<<endl;     //value at pointing location
    int distance = itr - v.begin();
    cout<<"Lower bound of 9 is at index "<<distance<<endl;  //will get the index of 9


    //lower bound: if search value is not found:
    auto itr1 = lower_bound(v.begin(), v.end(), 7);  //will return a iterator pointing towards the searched value
    cout<<*itr1<<endl;     //if searched value is not found, then will return the next value


    //upper bound: if search value is found
    auto itr2 = upper_bound(v.begin(), v.end(), 8);
    cout<<*itr2<<endl;  //will return the next value, 9

    //upper bound: if searched vlaue is not found
    auto itr3 = upper_bound(v.begin(), v.end(), 7)-v.begin();   //will return the next elements index, 2 (index of 8)
    cout<<itr3;


    //reverse a string
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout<<"String: " <<s<<endl;

    //rotate
    vector<int>vec = {1, 2, 3, 4, 5, 6, 7};
    rotate(vec.begin(), vec.begin()+2, vec.end()-2);

    cout<<"After rotation: ";
    for(auto i: vec){
        cout<<i<<" ";
    }
}

/*
I used std::distance(v.begin(), itr) to determine the index of the lower bound element in the vector. Let me explain this in more detail:

std::lower_bound returns an iterator to the first element that is not less than the search value. In the context of a vector, this iterator points to the position of the lower bound element within the vector. However, it doesn't directly give you the index of that element.

To find the index of the lower bound element, we can use the std::distance function. Here's what it does:

v.begin() is the iterator pointing to the beginning of the vector.
lowerBound is the iterator returned by std::lower_bound, pointing to the lower bound element.
By using std::distance(v.begin(), itr), we calculate the number of elements between the beginning of the vector and the lower bound iterator, effectively giving us the index of the lower bound element.
*/