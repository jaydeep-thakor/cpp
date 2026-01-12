#include <iostream>
using namespace std;

int main () {

    int a = 7;
    cout << a << endl;

    // we can only store a single character in char, and do not use "" double quotes always use use '' single quotes
    char b = 'j';
    cout << b << endl;

    bool c = true;
    cout << c << endl;

    float d = 1.2;
    cout << d << endl;

    double e = 1.23;
    cout << e << endl;

    int sizeA = sizeof(a);
    cout << "size of A is = " << sizeA << endl;

    int sizeE = sizeof(e);
    cout << "size of E is = " << sizeE << endl;


    // 1(how data is stored)
    
    // (2) type casting
    int x = 'a';
    cout << x << endl;
 
}
