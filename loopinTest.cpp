#include <iostream>
#include <string>

using namespace std;

int main() {
    system("CLS");


    int x;

    cout << "Masukkan angka: " ;
    cin >> x;


    for (int i = 0; i <= x-1; i++ ){
        for (int j = 0; j <= i; j++){
            cout << " * ";
        }
        cout<<'\n';
    }
    return 0;
}