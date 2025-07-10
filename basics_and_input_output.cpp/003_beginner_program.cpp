// Q3. Swap two numbers without using a third variableQ3. Swap two numbers without using a third variable

#include <iostream>
using namespace std;

int main() {
int a = 6;
int b = 27;
   
a = a+b;
b = a-b;
a = a-b;

cout <<"a = "<<a<<",b = "<<b;
    return 0;
}