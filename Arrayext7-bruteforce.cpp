#include <iostream>

using namespace std;


void occurring(int myArr[], int size){
    int counter,print;
    int saver = 0;
    for (int i = 0; i< size; i++ )
    {
        counter = 0;
        for(int j = 0; j< size; j++)
        {
            if (myArr[i] == myArr[j]){
            counter++;     
            }
        }
        if ( counter > saver )
        {
            saver = counter;
            print = myArr[i];
        }
    }
    
    cout << "angka yang paling sering muncul adalah: " << print << endl;
}

int main() {
    system("CLS");

int arr[] ={53,32,56,2,67,88,99,100,52,1,100,100,100,100,100,108,99,99,99,108,108};
int size = sizeof(arr)/ sizeof(arr[0]);

occurring(arr,size);



    return 0;
}