#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i,j,k = 0;
        vector<int> copyNums1(nums1.begin(),nums1.begin()+m);
        
        while ((i < m ) || (j < n)){

            if (copyNums1[i] <= nums2[j]){
                nums1[k] = copyNums1[i];
                i++;
                k++; 
            }
            else if(copyNums1[i] > nums2[j]){
                nums1[j]  = nums2[j];
                j++;
                k++;
            }
        }
        
    }
};