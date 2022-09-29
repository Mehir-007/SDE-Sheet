/*
Given an integer N, return the first N rows of Pascal’s triangle.
Input Format: N = 5

Result:
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

Explanation: There are 5 rows in the output matrix. Each row corresponds to each one of the rows in the image shown above.
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v(numRows);
        v[0]={1};
        for(int i=2;i<=numRows;i++)
        {
            vector<int> temp(i);
            temp[0]=1;temp[i-1]=1;
            for(int x=1;x<i-1;x++)
            {
                temp[x]=v[i-2][x]+v[i-2][x-1];
            }
            v[i-1]=temp;
        }
        return v;
}
int main()
{
    
}
