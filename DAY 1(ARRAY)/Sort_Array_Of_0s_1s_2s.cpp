/*
Problem Statement: Given an array consisting of only 0s, 1s and 2s. 
Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

*/
#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
      int low=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
                
            }
        }
}
int main()
{
    vector<int> v={2,0,2,1,1,0};
    sortColors(v);
    for(auto x:v)
    {
        cout<<x<<" ";
    }

}