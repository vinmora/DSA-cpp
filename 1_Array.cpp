#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main () {
    system("cls");

    array <int, 5> myArr;
    for (array<int, 5>::iterator i = myArr.begin(); i != myArr.end(); i++) {
        cout << "Masukkan data ke-" << (i - myArr.begin() + 1) << ": ";
        cin >> *i;
    }

    sort(myArr.begin(), myArr.end()); 

    cout << "Tiga angka terbesar adalah: ";
    for (array<int, 3>::iterator i = myArr.end()-1; i != myArr.end()-4 ; --i) {
        cout << *i << " ";
    }

    return 0;
}
