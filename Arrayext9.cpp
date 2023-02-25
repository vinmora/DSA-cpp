#include <iostream>
#include <algorithm>
using namespace std;

void nextGreater(int myArr [] ,int size,int ceck){

    sort(myArr , myArr + size );
        for(int* i = &myArr[0] ; i != &myArr[0] + size  ; i++){

        cout << "your sorted Array is: " <<  *(i)<< endl;
        }
     
    for(int* i = &myArr[0] ; i != &myArr[0] + size  ; i++){

        cout << "your sorted Array is: " <<  *(i)<< endl;


        if (ceck = *(i-1) && *(i-1) < *(i)) {
            cout << "The next greater value is : " <<  *(i)<< endl;
            break;
        }


    }


}

int main() {
    system("CLS");

    int n,fnd;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int myArr[n];

    for(int k = 0; k < n; k++ ){

        cout << "Masukkan elemen ke " << k+1 << " : " ;
        cin >>  myArr[k];
    }
    cout << endl;
    cout << "Masukkan angka sebelum nilai: ";
    cin >> fnd;

nextGreater(myArr , n , fnd);



    return 0;
}