#include <iostream> //5. Exponential time algorithm - 0(2")
#include <bitset>
#include <cmath> 
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int limit = pow(2, n);
    for (int i = 0; i < limit; i++) {
        cout << bitset<16>(i).to_string().substr(16 - n) << endl;
    }
    return 0;
}