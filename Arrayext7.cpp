#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void occurring(int myArr[], int size)
{
    sort(myArr,myArr + size);
    
    int counter,saver = 0;
    vector<int> vect;

    for(int i = 1; i<size-1;i++)
    {
        if(myArr[i-1] == myArr[i])
        {
            counter++;
            if(counter>saver)
            {
                vect.clear();
                saver = counter;
                vect.push_back(myArr[i]);
            }
            if(counter == saver){               
                vect.push_back(myArr[i]);
            }
        }
        else if (myArr[i-1] < myArr[i])
        {
            counter = 0;
        }

        
    }; 
    for (int x : vect)
        {
        cout << x <<" ";
        }
}


int main() {
    system("CLS");

int arr[] ={53,32,56,2,67,88,99,100,52,1,100,100,100,100,100,108,99,99,99,99,99,108,108};
int size = sizeof(arr)/ sizeof(arr[0]);

occurring(arr,size);



    return 0;
}