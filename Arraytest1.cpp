#include <iostream>
#include <array>

using namespace std;


int main(){
    system("cls");

    array<int,10> myArr;
    for(array<int,10>::iterator i = myArr.begin(); i != myArr.end(); ++i){
    cout << "Masukkan data pada pointer " << i << ": ";
    cin >> *i;}


    return 0;
}