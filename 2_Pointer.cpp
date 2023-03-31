 #include <iostream>

using namespace std;

int main() {
    int x = 10;
    int *ptr = &x; 

    cout << "Nilai x: " << x << endl;
    cout << "Alamat x: " << &x << endl;
    cout << "Nilai ptr: " << ptr << endl;
    cout << "Nilai yang ditunjuk oleh ptr: " << *ptr << endl;

    *ptr = 20;

    cout << "Nilai x setelah diubah melalui ptr: " << x << endl;

    return 0;
}
