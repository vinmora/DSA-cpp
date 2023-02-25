#include<iostream>
using namespace std;

void most_occurred_number(int nums[], int size)
{
  int max_count = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count)
       cout << nums[i] << endl;
  }
 }
 
int main()
{
    int nums[] = {53, 32, 56, 2, 67, 88, 99, 100, 52, 1, 100, 100, 100, 100, 100, 108, 99, 99, 99, 99, 99, 108, 108};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    most_occurred_number(nums, n);
}