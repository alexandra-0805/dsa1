#include <iostream> //1. Linear/Constant time algorithm – O(n) / O(1)
using namespace std;
int main() {
    int n = 0;
    n = n + 10000;
    for (int i = 1; i <= 3; i++) {
        cout << "Value of n: " << n << endl;
    }
    return 0;
}