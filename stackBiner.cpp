#include <iostream>
#include <stack>
#include <string>

using namespace std;

void decimalToBinary(stack<int>& s, int decimalNum) {
    while(decimalNum != 0) {
        int remainder = decimalNum % 2;
        s.push(remainder);
        decimalNum /= 2;
    }
}

void decimalToOctal(stack<int>& s, int decimalNum) {
    while(decimalNum != 0) {
        int remainder = decimalNum % 8;
        s.push(remainder);
        decimalNum /= 8;
    }
}

void decimalToHexadecimal(stack<char>& s, int decimalNum) {
    while(decimalNum != 0) {
        int remainder = decimalNum % 16;
        if(remainder < 10) {
            s.push(remainder + '0');
        } else {
            s.push(remainder - 10 + 'A');
        }
        decimalNum /= 16;
    }
    to_string(decimalNum);
}

int main() {
    int decimalNum;
    cout << "Masukkan bilangan desimal: ";
    cin >> decimalNum;
    
    stack<int> binaryStack, octalStack;
    stack<char> hexStack;
    
    decimalToBinary(binaryStack, decimalNum);
    decimalToOctal(octalStack, decimalNum);
    decimalToHexadecimal(hexStack, decimalNum);
    

    cout << "Bilangan biner: ";
    while(!binaryStack.empty()) {
        cout << binaryStack.top();
        binaryStack.pop();
    }
    cout << endl;
    

    cout << "Bilangan oktal: ";
    while(!octalStack.empty()) {
        cout << octalStack.top();
        octalStack.pop();
    }
    cout << endl;
    

    cout << "Bilangan heksadesimal: ";
    while(!hexStack.empty()) {
        cout << hexStack.top();
        hexStack.pop();
    }
    cout << endl;
    
    return 0;
}
