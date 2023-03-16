#include <iostream>
#include <vector>

using namespace std;

class solution{
public:
   int maxSubArray(vector<int>& nums){

    int bigNum,subTotal,bigTotal,pivotStart;

    bigNum = nums[0];
    bigTotal,subTotal = 0;
    for (int i = 0 ;  i != nums.size() ; i++){
         if (bigNum < nums[i]){
                bigNum = nums[i];
            };

         if(subTotal + nums[i] > 0){
            subTotal += nums[i];
            if(bigTotal < subTotal){
                bigTotal = subTotal;
            }
         }
          else if(subTotal + nums[i] <= 0){
            subTotal = 0;
          }
    };

         if(bigTotal > bigNum){
            return bigTotal;
         }
         else{
            return bigNum;
         }
    } 
};