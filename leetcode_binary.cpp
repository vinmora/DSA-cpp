#include <iostream>
#include <vector>

using namespace std;

class solution{
public:

int search(vector<int>& nums, int target){

    int start = 0;
    int end = sizeof(nums)/sizeof(nums[0]) - 1;
    

    while(start < end){
        int mid = (start + end)/2;
        if (nums[mid] == target){
            return mid;
            break;
        }
        else if (target <= nums[mid] ){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    };
    return -1;
}
};