/*
Given an array, print the Next Smaller Element (NSE) for every element. 
The NSE for an element x is the first smaller element on the right side of x in the array. 
Elements for which no smaller element exist (on the right side), consider NSE as -1. 
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> ans(n,-1);
    stack<pair<int,int>> s;
    for(int i=0;i<n;i++)
    {
        if(s.empty()) s.push({arr[i],i});
        while(!s.empty() && arr[i]<s.top().first)
        {
            ans[s.top().second]=arr[i];
            s.pop();
        }
        s.push({arr[i],i});
    }
    return ans;
}
int main()
{
    vector<int> arr={4,8,5,2,25};
    vector<int> ans=nextSmallerElement(arr,5);
    for(auto x:ans)
    cout<<x<<" ";
}