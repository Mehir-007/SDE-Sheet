/*
Problem Statement: 
Given a circular integer array A, return the next greater element for every element in A. 
The next greater element for an element x is the first element greater than x that we come 
across while traversing the array in a clockwise manner. 
If it doesn’t exist, return -1 for this element.

Example 1: 

Input: N = 11, A[] = {3,10,4,2,1,2,6,1,7,2,9}

Output: 10,-1,6,6,2,6,7,7,9,9,10

Explanation: For the first element in A ,i.e, 3, the greater element which comes next to it while traversing and is closest to it is 10. Hence,10 is present on index 0 in the resultant array. Now for the second element,i.e, 10, there is no greater number and hence -1 is it’s next greater element (NGE). Similarly, we got the NGEs for all other elements present in A.  


Example 2:

Input:  N = 6, A[] = {5,7,1,7,6,0}

Output: 7,-1,7,-1,7,5
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(nums.size(),-1);
        stack<pair<int,int>> s;
        //loop twice only difference from normal array
        for(int i=0;i<n*2;i++)
        {
            if(s.empty())s.push({nums[i%n],i%n});
            while(!s.empty() && s.top().first<nums[i%n])
            {
                ans[s.top().second]=nums[i%n];
                s.pop();
            }
            s.push({nums[i%n],i%n});
        }
        return ans;
 }

int main()
{
	vector < int > v {5,7,1,2,6,0};
  	vector<int> ans=nextGreaterElements(v);
  	for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
}
}