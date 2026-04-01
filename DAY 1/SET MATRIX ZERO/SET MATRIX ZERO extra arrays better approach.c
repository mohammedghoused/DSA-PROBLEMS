#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> zeroMatrix(vector<vector<int>> &matrix,int n,int  m)
{
    int rows[n] = {0};
    int cols[m] = {0};
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(matrix[i][j] == 0)
            {
                rows[i] = 1;
                cols[j] = 1;
            }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (rows[i] || cols[j])
                matrix[i][j] = 0;



    return matrix;
}



int main() {
    vector<vector<int>> matrix = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 0, 1},{1, 1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: \n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
