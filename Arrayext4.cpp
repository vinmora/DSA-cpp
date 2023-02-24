#include <iostream>
#include <array>
#include <algorithm>

using namespace std;




int main() {
    system("CLS");

    int myArr[] = {53,32,56,2,67,88,99,100,52,1};
    int* awal = myArr;
    int* akhir = awal + sizeof(myArr)/sizeof(myArr[0]);


    for (int* i =awal; i != akhir; ++i) {
        cout << *i <<endl;
    }

    cout<<endl;
    sort(awal, akhir);

      for (int* i =awal; i != akhir; ++i) {
        cout << *i << endl;}

     cout << *(akhir - 2) << endl;

    return 0;
}