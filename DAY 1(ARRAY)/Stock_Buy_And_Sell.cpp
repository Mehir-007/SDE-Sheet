/*
Stock Buy And Sell
Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. 
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and 
sell on day 5 (price = 6), profit = 6-1 = 5.

Note: That buying on day 2 and selling on day 1 
is not allowed because you must buy before 
you sell.
*/
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int max_pro=INT_MIN;
        int max_p=INT_MIN;
        for(int i=prices.size()-1;i>=0;i--)
        {
            max_p=max(max_p,prices[i]);
            max_pro=max(max_pro,max_p-prices[i]);
        }
        return max_pro;
}
int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}
