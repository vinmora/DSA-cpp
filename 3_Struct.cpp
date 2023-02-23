#include <iostream>

using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};

int main() {
    Mahasiswa mhs1, mhs2; 

    
    mhs1.nama = "Kevin";
    mhs1.umur = 18;
    mhs1.jurusan = "Ilmu Komputer";

    
    mhs2.nama = "Bambang";
    mhs2.umur = 19;
    mhs2.jurusan = "Informasi";

    
    cout << "Data mahasiswa 1:" << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << endl;
    cout << "Jurusan: " << mhs1.jurusan << endl;

    cout << "Data mahasiswa 2:" << endl;
    cout << "Nama: " << mhs2.nama << endl;
    cout << "Umur: " << mhs2.umur << endl;
    cout << "Jurusan: " << mhs2.jurusan << endl;

    return 0;
}
