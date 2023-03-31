#include <iostream>
 
using namespace std;
 
class solution {
  public:

  int search(vector<int> vec, int target){

    int start = 0, end = vec.size()-1;
    int mid;

   while ( end > start ){
      mid = (start + end)/2;
      if (vec[mid] < target){
          start = mid + 1;
      }
      else {
        end = mid;
      }
    };

    if (vec[start] == target){
      return start;
    }
    else if (vec[end] == target){
      return end;
    }
    else {
      return -1;
    };

  }
};