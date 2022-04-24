#include <iostream>
using namespace std;

int main(void) {
    int n, result = 0;
    
    cin >> n;
    if (n < 3)
        result = (n + 1) * 1575;
    else if (n >= 3 && n < 13)
        result = 3600 + n * 1575;
    else if (n >= 13 && n < 23)
        result = 3600 * 2 + (n - 1) * 1575;
    else if (n == 23)
        result = 3600 * 3 + (n - 2) * 1575;
    
    cout << result << '\n';;
    return 0;
}
