#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)

{
    //1 adding row and colum position in sets
    //2 traversing entire row and setting it zeero
    //3 traversing entire col and setting it zeero
    int m = matrix.size();

    int n = matrix[0].size();

    set<int> row, col;

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            // storing the postion of zero

            if (matrix[i][j] == 0)
            {

                row.insert(i);

                col.insert(j);
            }
        }
    }

    for (int i : row)
    {

        for (int j = 0; j < n; j++)
        {

            matrix[i][j] = 0;
        }
    }

    for (int j : col)
    {

        for (int i = 0; i < m; i++)
        {

            matrix[i][j] = 0;
        }
    }
}
