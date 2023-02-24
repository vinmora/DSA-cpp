#include <iostream>
#include <string>

using namespace std;


int main() {
    system("CLS");


    int a = 100;
    int *b = &a;

    int **d = &b;

 cout<< a << endl;
 cout<<endl;
 cout<< b << " \t <<print  b "<<endl;
 cout<< *b << " \t <<print *b "<<endl;
 cout<<endl;

cout<<endl;
cout<<endl;


 cout << d << " \t  <<print d "<< endl;
 cout << *d << " \t  <<print *d "<< endl;
 cout << **d << " \t  <<print **d "<< endl;
 

    return 0;
}