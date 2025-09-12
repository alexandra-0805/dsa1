#include <iostream> //4. Polynomial time algorithm - 0(n3)
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                cout << "(" << i << ", " << j << ", " << k << ") ";
            }
            cout << endl;
        }
        cout << "------" << endl;
    }
    return 0;
}