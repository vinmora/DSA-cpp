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
    

    println("Kuda makanannya rumput atau ayam?");
    print(">> ");

    string jawaban;getstr(jawaban);

    if (jawaban == "rumput" || jawaban == "Rumput" || jawaban == "RUMPUT") {
        println("Jawaban anda benar, kuda makan rumput.");
    }
    else if (jawaban == "ayam" || jawaban == "Ayam" || jawaban == "AYAM"){
        println("Jawaban anda salah, kuda tidak makan ayam.");
    }
    else {
        print("Mohon masukkan jawaban yang sesuai pertanyaan!");
    };
    


    return 0;
}