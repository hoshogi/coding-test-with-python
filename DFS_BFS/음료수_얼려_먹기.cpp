#include <iostream>
#include <string>
using namespace std;

int n, m;
int dx[4] = {0, 1, 0 , -1};
int dy[4] = {-1, 0, 1, 0};

void dfs(int board[1000][1000], int row, int col) {
    board[row][col] = 1;
    for (int i = 0; i < 4; i++) {
        int tempRow = row + dy[i];
        int tempCol = col + dx[i];
        
        if (tempRow >= 0 && tempRow < n && tempCol >= 0 && tempCol < m && board[tempRow][tempCol] == 0)
            dfs(board, tempRow, tempCol);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int result = 0;
    int board[1000][1000] = {0, };
    
    cin >> n >> m;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string str;
        
        getline(cin, str);
        for (int j = 0; j < m; j++)
            board[i][j] = str[j] - '0';
    }
        
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0) {
                result++;
                dfs(board, i, j);
            }
        }
    }
    cout << result << '\n';
    return 0;
}
