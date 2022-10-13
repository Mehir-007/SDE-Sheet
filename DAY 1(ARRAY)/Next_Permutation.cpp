/*
Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.
If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
Input format: Arr[] = {1,3,2}
Output: Arr[] = {2,1,3}

Input format: Arr[] = {3,2,1}
Output: Arr[] = {1,2,3}
*/
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    if (nums.size() == 0 || nums.size() == 1)
        return;
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] >= nums[i + 1])
        i--;
    if (i >= 0)
    {
        int j = nums.size() - 1;
        while (nums[j] <= nums[i])
            j--;
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
}

int main()
{
    vector<int> v = {2, 1, 3};
    nextPermutation(v);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}
