#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        for(vector<int>::iterator it = nums.begin(); it != nums.end() -1 ; it++){
            if(*(it) == *(it + 1)){
                return false;
                break;
            }
        }
        return true;
    }
};