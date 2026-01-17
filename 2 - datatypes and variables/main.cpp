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
    // int x = 'a';
    // cout << x << endl;
 
    // char chhh = 97;
    // cout << "chhh is " << chhh << endl;

    // int inttt = chhh;
    // cout << "inttt is " << inttt << endl;

    // max value can be store to 8 (char) bits is 2^8 = 2×2×2×2×2×2×2×2 - 1
    // max value can be store to 32 (int) bits is 2^8 = 2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2×2 - 1

    // char ch1 = 123456;
    // A char can store only 1 byte = 8 bits
    // So it can hold values from 0 to 255 (unsigned) or -128 to 127 (signed)
    // But 123456 is too large, so C++ will truncate (cut) the extra bits.
    // Convert 123456 to binary: 123456 = 00000001 11100010 01000000 (17 bits approx)
    // Original:   00000001 11100010 01000000
    // Keep only:                01000000
    // 01000000 in decimal = 64   
    // @
}
