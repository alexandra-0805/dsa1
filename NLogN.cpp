#include <iostream> // 2. N Log N Time Algorithm – O(n log n)
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int logn = log2(n); // calculate log base 2 of n
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= logn; j++) {
            cout << "(" << i << ", " << j << ") ";
        }
        cout << endl;
    }
    return 0;
}