#include <iostream>
#include <algorithm>


using namespace std;

void k_largest(int myArr[], int k_numb, int arrSize){
    
    int* first = &myArr[0];
    int* last = &myArr[0] + arrSize;

    sort(first,last);
    for (int* i = last-1 ; i != last-1 - k_numb; --i){
        
        cout << *i ;

        cout<<endl;
    }
}


int main() {
    system("CLS");

    int myArr[] = {53,32,56,2,67,88,99,100,52,1};
    int arrSize = sizeof(myArr)/sizeof(myArr[0]);
    int k_numb = 4;

    system("CLS");
    k_largest(myArr,k_numb,arrSize);



    return 0;
}