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
    
    cout << "Masukkan jumlah angka: ";
    int x,i,saver;
    cin >> x;
    int myArr[x];
    cout<<endl;

    for (i =  0; i < x; i++) {

        cout << "Masukkan angke ke-" ;
        cout << i + 1 << ": " ;
        cin >> myArr[i];     
    }

    saver = myArr[0];
    for (i = 1; i < x ; i++) {
          if (myArr[i] >= saver){
            saver = myArr[i];}
    }

    cout << "Angka terbesar adalah: " << saver << endl;


    return 0;
}