#include <iostream>
#include <string>

using namespace std;

namespace myPrint {
    void print (string str_In) {
     cout<<str_In;
    }
    void println (string str_In) {
     cout<< str_In << endl;
    }
    void getstr(string&output){
     cout<<"Masukkan kata: ";
     cin >> output;     
    }
    void getln(string&output){
     cout<<"Masukkan kata: ";
     getline(cin, output);     
    }


}

using namespace myPrint;

int main() {
    system("CLS");
    
    

    return 0;
}