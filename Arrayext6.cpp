#include <iostream>
#include <algorithm>
using namespace std;


void twoGreater(int myArr[], int sizeArr){

    sort(&myArr[0], &myArr[0] + sizeArr);

    int count = 0;
    int* max_print ;
    for(int* i = &myArr[0] + sizeArr-1; i != &myArr[0]; i--){
    
        if (*(i-1) < *(i)){
            count = count + 1;
            if (count == 2){
            max_print = i-1;

            cout << *max_print << endl;
        };
    }
            cout << *(i-1) <<" "<< *i <<endl;
        }
    for(int* j = &myArr[0]; j <= max_print; j++){

        cout << *j << " ";
    }

}

int main() {
    system("CLS");
    
    int myArr[] = {53,32,56,2,67,88,99,100,52,1,100,100,100,108,99,99,99,108,108};
    int sizeArr = sizeof(myArr)/sizeof(myArr[0]);

    twoGreater(myArr,sizeArr);

    return 0;
}