#include <iostream>

using namespace std;

int main() {
    system("CLS");
   
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    int pos_spasi = kalimat.find(" ");
    int pos_spasi2 = kalimat.rfind(" ");
    string input_awal = kalimat.substr(0, pos_spasi);
    string input_akhir = kalimat.substr(pos_spasi2 + 1);

    cout << "Inputan awal: " << input_awal << endl;
    cout << "Inputan akhir: " << input_akhir << endl;

    return 0;
}