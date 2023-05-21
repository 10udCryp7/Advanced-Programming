#include <iostream>
using namespace std;

int n, m;

int maze[100][100];
int visit[100][100];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool dfs(int x, int y)
    {
        if (x == n - 1 && y == m - 1)
        {
            return true;
        }
            visit[x][y] = 1;
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx >= 0 && nx < n && ny>=0 && ny < m && !visit[nx][ny] && !maze[nx][ny])
                {
                    if (dfs(nx, ny))
                    {
                        maze[nx][ny] = 2;
                        return true;
                    }
                }
            }
        return false;
    }
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
        }
    }
    dfs(0,0);
    maze[0][0] = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
