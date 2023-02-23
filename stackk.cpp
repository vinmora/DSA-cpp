#include <iostream>

using namespace std;

namespace vin {
    void print (string str_In) {
     cout << str_In;}
    void println (string str_In) {
     cout << str_In << endl;}
    void getstr(string & output) {
     cin >> output;}
    void getint(int & output) {
     cin >> output;}
    void getln(string & output) {
     getline(cin, output);}
}

using namespace vin;



int decimalToBinary(int decimalNum) {         //FUNGSI PENGUBAH KE BINER
    int binaryNum = 0, remainder, i = 1;
    while(decimalNum != 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * i;
        i *= 10;
    }
    return binaryNum;
}

int decimalToOctal(int decimalNum) {
    int octalNum = 0, i = 1;
    while(decimalNum != 0) {
        octalNum += (decimalNum % 8) * i;
        decimalNum /= 8;
        i *= 10;
    }
    return octalNum;
}


string decimalToHexadecimal(int decimalNum) {
    string hexNum = "";
    while(decimalNum != 0) {
        int remainder = decimalNum % 16;
        if(remainder < 10) {
            hexNum = char(remainder + '0') + hexNum;
        } else {
            hexNum = char(remainder - 10 + 'A') + hexNum;
        }
        decimalNum /= 16;
    }
    return hexNum;



int main() {
    system("CLS");


    

    return 0;
}



