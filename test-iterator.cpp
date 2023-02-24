#include <iostream>
#include <array>

using namespace std;


int main () {
    system("cls");



    int x,y,z,temp;
    array <int, 10> myArr;
    for(array<int,10>::iterator i = myArr.begin(); i != myArr.end();i++) {
         cin>> *i;
         cout << i <<endl;
         cout << myArr.begin()<<endl;
          cout << i - myArr.begin() <<endl;



    }



    return 0;
}