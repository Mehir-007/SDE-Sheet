/*
Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and return its sum and print the subarray

Example 1:
Input: arr = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Examples 2:
Input: arr = [1]
Output: 1
Explanation: Array has only one element and which is giving positive sum of 1.
*/

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        maxi = max(sum, maxi);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{
    vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int lon = maxSubArray(arr);
    cout << "The longest subarray with maximum sum is " << lon << endl;
    
}
