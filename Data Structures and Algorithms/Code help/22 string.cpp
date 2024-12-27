#include <iostream>
#include <string>

using namespace std;

int main() {
    // Initialize a string
    string text = "Hello, World!";

    // Length and Size Functions
    cout << "Length of the string: " << text.length() << endl;
    cout << "Is the string empty? " << (text.empty() ? "Yes" : "No") << endl;

    // Accessing Characters
    cout << "Character at index 7: " << text[7] << endl;
    cout<<"Character at index 7: "<< text.at(7)<<endl;
    cout << "First character: " << text.front() << endl;
    cout << "Last character: " << text.back() << endl;

    // Substring
    string substring = text.substr(7, 5);
    cout << "Substring: " << substring << endl;

    // Concatenation
    string moreText = " How are you?";
    string concatenated = text + moreText;
    cout << "Concatenated string: " << concatenated << endl;

    string moreOne = "useAppend";
    concatenated.append(moreOne);

    cout<<"concatenaded (append): "<<concatenated<<endl;

    // Insertion and Deletion
    concatenated.insert(13, "doing ");
    cout << "After insertion: " << concatenated << endl;

    concatenated.erase(19, 5);
    cout << "After erasure: " << concatenated << endl;

    // Search and Find
    size_t found = concatenated.find("doing");
    if (found != string::npos) {            //size_t is the data type used to store the result of the search. It's an unsigned integer type, and string::npos is a constant defined in the string class representing the "not found" condition.
                                //find function returns the position (index) of the first occurrence of the substring "doing" within the concatenated string. If it finds the substring, it returns the position as a size_t value. If it doesn't find the substring, it returns string::npos.
        cout << "Found 'doing' at position " << found << endl;
    } else {
        cout << "'doing' not found." << endl;
    }

    // Replacing
    concatenated.replace(7, 5, "Universe");     //7 startiing point, 5:number to letter that will be replaced after the starting point
    cout << "After replacement: " << concatenated << endl;

    // String Comparison
    string compareString = "Hello, Universe!";
    int comparison = concatenated.compare(compareString);
    if (comparison == 0) {
        cout << "Strings are equal." << endl;
    } else if (comparison < 0) {
        cout << "Concatenated is less than compareString." << endl;
    } else {
        cout << "Concatenated is greater than compareString." << endl;
    }

    //string copy
    string s2 = concatenated;
    cout<<"new s2: "<<s2<<endl;

    // C-Style String Conversion
    const char* cStyleString = concatenated.c_str();
    cout << "C-Style String: " << cStyleString << endl;

    // String Input and Output
    string userInput;
    cout << "Enter a line of text: ";
    getline(cin, userInput);
    cout << "You entered: " << userInput << endl;

    string str2;
    cout<<"enter (# as delimiter): ";
    getline(cin, str2, '#');    //# here is a custorm delimiter
    cout<<"entered: "<<str2<<endl;

    // String Manipulation
    for (char& c : concatenated) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    cout << "After case conversion: " << concatenated << endl;

    return 0;
}
