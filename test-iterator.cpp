#include <iostream>
#include <array>

using namespace std;


int main () {
    system("cls");



    int x,y,z,temp;
    array <int, 10> myArr;
    for(array<int,10>::iterator i = myArr.begin(); i != myArr.end();i++) {
        cout<< " Masukkan data ke- " << i << " : ";
        cin>> *i;
        x = *i;
        y = x;
        z = y;
    }



    return 0;
}