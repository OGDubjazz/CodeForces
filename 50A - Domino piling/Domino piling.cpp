#include <iostream>

using namespace std;

int main() {  
    int m, n, num = 0;
    cin >> m >> n;
    num += (m / 2) * n;
    if (m % 2 == 1) {
        num += (n / 2);
    }
    cout << num << "\n";
    return 0;
}
