/*
Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 
and then return the matrix.
*/

#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row(matrix.size(),-1);
        vector<int> column(matrix[0].size(),-1);
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    column[j]=0;
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(row[i]==0 || column[j]==0)
                    matrix[i][j]=0;
            }
        }
        
}
int main() {
  vector < vector < int >> arr;
  arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(arr);
  cout<<"The Final Matrix is "<<endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}