#include <iostream>
using namespace std;

int main(void) {
    int n;
    int row = 1, col = 1;
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    cin >> n;
    for (int i = 0; i < 6; i++) {
        int tempRow = row;
        int tempCol = col;
        char way;
        
        cin >> way;
        switch (way) {
            case 'U':
                tempRow += dx[0];
                tempCol += dy[0];
                break;
            case 'R':
                tempRow += dx[1];
                tempCol += dy[1];
                break;
            case 'D':
                tempRow += dx[2];
                tempCol += dy[2];
                break;
            case 'L':
                tempRow += dx[3];
                tempCol += dy[3];
                break;
        }
        if (tempRow >= 1 && tempRow <= n && tempCol >= 1 && tempCol <= n) {
            row = tempRow;
            col = tempCol;
        }
    }
    cout << row << ' ' << col << endl;
    return 0;
}
