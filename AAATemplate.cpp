#include <iostream>
#include <string>

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

int main() {
    system("CLS");
    


    return 0;
}