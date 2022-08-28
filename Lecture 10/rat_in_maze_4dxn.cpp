#include <iostream>
using namespace std;
bool RatInMaze(char maze[][100], int sol[][10], int i, int j, int n, int m)
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
        return true;
    }

    // Recursion

    sol[i][j] = 1;
    if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j + 1] == 0)
    {
        bool rightkaarasta = RatInMaze(maze, sol, i, j + 1, n, m);
        if (rightkaarasta)
        {
            return true;
        }
    }
    if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] == 0)
    {
        bool nichekaarasta = RatInMaze(maze, sol, i + 1, j, n, m);
        if (nichekaarasta)
        {
            return true;
        }
    }
    if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] == 0)
    {
        bool upkarasta = RatInMaze(maze, sol, i, j - 1, n, m);
        if (upkarasta)
        {
            return true;
        }
    }
    if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] == 0)
    {
        bool pichekarasta = RatInMaze(maze, sol, i - 1, j, n, m);
        if (pichekarasta)
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
    char maze[][100] = {
        "0X000",
        "0X0X0",
        "000X0",
        "XXXX0"};
    int sol[10][10] = {0};
    RatInMaze(maze, sol, 0, 0, 4, 5);
    return 0;
}