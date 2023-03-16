#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i,j,k = 0;
        for (i = m;i != m+n ; i++){
            nums1[m] = nums2[j];
            j++;
        }
        
        stable_sort(&nums1[0],&nums1[0] + sizeof(nums1)/sizeof(nums1[0]));
    }
};