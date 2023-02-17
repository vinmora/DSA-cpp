#include <iostream>
#include <string>

using namespace std;

int main() {
    system("CLS");
   
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);


    int pos_spasi = kalimat.length()-1;
    string reverse="" ;
    for (int i = kalimat.length()-1; i >= 0;--i) {
        if ( kalimat[i] == ' '){
            reverse = reverse + kalimat.substr(i+1 , pos_spasi-i) + ' ';
            pos_spasi = i-1;         
        }
        else if (i == 0) { 
            reverse = reverse + kalimat.substr(0,pos_spasi+1);       
        }
    }

    cout<<reverse<<endl;
    return 0;
}