#include <iostream>
#include <algorithm>
using namespace std;
void secondSmallest(int myArr[] ,int size){

    sort(myArr,myArr + size);

    for (int* it = myArr ; it !=myArr + size ; it++){
        if (*it < *(it+1)) {
            cout << " The second smallest number is : " << *(it+1) <<endl;
            break;
        }        
    }
}
int main() {
    system("CLS");
int myArr[] = {53,32,56,3,67,88,99,100,52,100,100,3,3,32,2,100,108,99,99,99,108,108};
int mySize = sizeof(myArr)/sizeof(myArr[0]);
secondSmallest(myArr,mySize);

    return 0;
}