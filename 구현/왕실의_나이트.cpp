#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int x, y, result = 0;
    int dx[8] = {-1, 1, 2, 2, 1, -1, -2, 2};
    int dy[8] = {2, 2, 1, -1, -2, -2, 1, -1};
    string str;
    
    cin >> str;
    x = str[0] - 'a' + 1;
    y = str[1] - '0';
    
    for (int i = 0; i < 8; i++) {
        int tempX = x + dx[i];
        int tempY = y + dy[i];
        
        if (tempX >= 1 && tempX <= 8 && tempY >= 1 && tempY <= 8)
            result++;
    }
    
    cout << result << '\n';
    return 0;
}
