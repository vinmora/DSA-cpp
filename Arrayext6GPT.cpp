#include <iostream>
using namespace std;

void twoGreater(int myArr[], int sizeArr){
    int max1 = myArr[0], max2 = myArr[0];

    // cari dua nilai maksimum dalam array
    for(int i = 1; i < sizeArr; i++){
        if(myArr[i] > max1){
            max2 = max1;
            max1 = myArr[i];
        }
        else if(myArr[i] > max2){
            max2 = myArr[i];
        }
    }

    // cetak elemen yang memiliki setidaknya dua nilai lebih besar
    for(int i = 0; i < sizeArr; i++){
        if(myArr[i] < max2){
            cout << myArr[i] << " ";
        }
    }
}

int main() {
    int myArr[] = {53,32,56,2,67,88,99,100,52,1,100,100,100,108,99,99,99,108,108};
    int sizeArr = sizeof(myArr)/sizeof(myArr[0]);

    twoGreater(myArr,sizeArr);

    return 0;
}
