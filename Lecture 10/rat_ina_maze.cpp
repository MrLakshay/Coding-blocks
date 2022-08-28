#include <iostream>
using namespace std;
// this is to output all paths in the maze
// return true in base case and only first path will be returned
bool RatInMaze(char maze[][5], int sol[][10], int i, int j, int n, int m)
{

    // Base case
    if (i == n - 1 and j == m - 1)
    {
        sol[i][j] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return false;
    }

    // Recursion

    sol[i][j] = 1;
    if (j + 1 < m and maze[i][j + 1] != 'X')
    {
        bool rightkaarasta = RatInMaze(maze, sol, i, j + 1, n, m);
        if (rightkaarasta)
        {
            return true;
        }
    }
    if (i + 1 < n and maze[i + 1][j] != 'X')
    {
        bool nichekaarasta = RatInMaze(maze, sol, i + 1, j, n, m);
        if (nichekaarasta)
        {
            return true;
        }
    }

    // Back tracking

    sol[i][j] = 0;
    return false;
}

int main()
{
    char maze[][5] = {
        "0000",
        "00XX",
        "0000",
        "XX00"};
    int sol[10][10] = {0};
    RatInMaze(maze, sol, 0, 0, 5, 4);
    return 0;
}