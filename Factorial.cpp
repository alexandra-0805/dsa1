#include <iostream> //6. Factorial time algorithm - 0(n!)
using namespace std;
long long factorial(int n) { 
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    long long fact = factorial(n);
    cout << "Factorial of " << n << " = " << fact << endl;
    cout << "Printing numbers from 1 to n!:" << endl;
    for (long long i = 1; i <= fact; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}