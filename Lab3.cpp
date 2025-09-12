#include <iostream>
using namespace std;
const int MAX = 10;
struct List {
    int data[MAX],size, capacity;
};
bool empty(List &L) { // function to empty
    return (L.size == 0);
}
bool full(List &L) { // function to full
    return (L.size == L.capacity);
}
void printlist(List &L) { // function to printlist
    if (empty(L)) {
        cout << "List is empty.\n";
    } else {
        cout << "List contents: ";
        for (int i = 0; i < L.size; i++) {
            cout << L.data[i] << " ";
        }
        cout << endl;
    }
}
void insert(int x, int p, List &L) { // function to x at p
    if (full(L)) {
        cout << "Cannot insert, list is full.\n";
    } else if (p < 0 || p > L.size) {
        cout << "Invalid position.\n";
    } else {
        // Shift elements to the right
        for (int i = L.size; i > p; i--) {
            L.data[i] = L.data[i - 1];
        }
        L.data[p] = x;
        L.size++;
        cout << "Inserted " << x << " at position " << p << ".\n";
    }
}
void del(int p, List &L) { // function to delete element at p
    if (empty(L)) {
        cout << "Cannot delete, list is empty.\n";
    } else if (p < 0 || p >= L.size) {
        cout << "Invalid position.\n";
    } else {
        cout << "Deleted " << L.data[p] << " from position " << p << ".\n";
        for (int i = p; i < L.size - 1; i++) { //shift elements to the left
            L.data[i] = L.data[i + 1];
        }
        L.size--;
    }
}
int main() {
    List L;
    cout << "Enter maximum capacity of the list (up to " << MAX << "): ";
    cin >> L.capacity;
    if (L.capacity > MAX) { // capacity
        cout << "Capacity exceeds maximum allowed (" << MAX << "). Setting capacity to " << MAX << ".\n";
        L.capacity = MAX;
    }
    cout << "Enter initial number of elements: ";
    cin >> L.size;
    if (L.size > L.capacity) { // size
        cout << "Initial size exceeds capacity. Setting size to capacity.\n";
        L.size = L.capacity;
    }
    cout << "Enter " << L.size << " elements:\n";
    for (int i = 0; i < L.size; i++) {
        cin >> L.data[i];
    }
    int menu; // menu-driven
    do {
        cout << "\nMenu:\n";
        cout << "1. Print list\n";
        cout << "2. Insert element\n";
        cout << "3. Delete element\n";
        cout << "4. Check if empty\n";
        cout << "5. Check if full\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> menu;
        if (menu == 1) { // if else condition
            printlist(L);
        } else if (menu == 2) {
            int x, p;
            cout << "Enter element to insert: ";
            cin >> x;
            cout << "Enter position (0 to " << L.size << "): ";
            cin >> p;
            insert(x, p, L);
        } else if (menu == 3) {
            int p;
            cout << "Enter position to delete (0 to " << L.size - 1 << "): ";
            cin >> p;
            del(p, L);
        } else if (menu == 4) {
            if (empty(L)) cout << "List is empty.\n";
            else cout << "List is NOT empty.\n";
        } else if (menu == 5) {
            if (full(L)) cout << "List is full.\n";
            else cout << "List is NOT full.\n";
        } else if (menu == 6) {
            cout << "Exiting program.\n";
        } else {
            cout << "Invalid choice.\n";
        }
    } while (menu != 6);
    return 0;
}