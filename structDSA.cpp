#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("CLS");

    vector<int> v1 ={1,5,7};
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;


    v1.push_back(4); cout <<endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    return 0;
}