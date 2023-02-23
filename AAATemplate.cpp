#include <iostream>
#include <string>

using namespace std;

namespace printstr {
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

using namespace printstr;


int main() {
    system("CLS");

 int floors = 15,
     rooms = 300,
     suites = 30;

    cout << "The grande Hotel has " << floors << " floors \n";
    cout << "with "<< rooms << " rooms and " << suites;
    


    


    return 0;
}