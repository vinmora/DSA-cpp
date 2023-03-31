#include <iostream>
#include <array>

using namespace std;

void insert(int arr[], int size,int head, int tail){
     

   if( head != tail && head < size-1){
        cout << "Masukkan element: ";
        cin >> arr[head];
        head++;
        cout<<endl;
   }
    else if (head != tail && head == size -1 && tail != 0) {
        cout << "Masukkan element: ";
        cin >> arr[head];
        head = 0;
        head++;
        cout<<endl;
   }
   else {
        cout << "Antrian penuh !" << endl;
    }
}

 void pop(int arr[],int head, int tail){
    if(head != tail && tail < size -1){ 
        delete(*arr[tail]);
    }


 }


int main() {
    system("cls");

    int x;
    cout << "Masukkan ukuran queue : " ;
    cin >> x;
    int head, tail = 0;
    int myArr[x-1];

    insert(myArr,x,head, tail);
    pop(myArr,head,tail);





    return 0;
}