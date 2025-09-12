#include <iostream> // 3. Logarithmic time algorithm - O(log n)
using namespace std;
int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            return mid; // x found at index mid
    }
    return -1; // x not found
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter value to search: ";
    cin >> x;
    int result = binarySearch(arr, n, x);
    if (result != -1)
        cout << x << " found at index " << result << endl;
    else
        cout << x << " not found in array." << endl;
    return 0;
}