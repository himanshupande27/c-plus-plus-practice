// Q8. Take user input and print ASCII value

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "The ASCII value of '" << ch << "' is " << int(ch) << endl;

    return 0;
}