#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Creating nodes
class Node {
public:
    int value;
    Node* next;
};

int main() {
    Node *A = new Node();
    Node *B = new Node();
    Node *C = new Node();
    Node *D = new Node();
    Node *E = new Node();
    Node *F = new Node();
    Node *G = new Node();
    Node *H = new Node();
    Node *I = new Node();

    // Assign value values
    A->value = 100;
    B->value = 5;
    C->value = -4;
    D->value = 8;
    E->value = 651;
    F->value = 37;
    G->value = 64;
    H->value = -57;
    I->value = 1000;

    // Connect nodes
    A->next = B;
    B->next = F;
    F->next = C;
    C->next = E;
    E->next = D;
    D->next = G;
    G->next = H;
    H->next = I;
    I->next = nullptr;

    // print the lisked list value
    Node* head = A;
    unordered_set<Node*> visited;

    cout << "Linked List Traversal with Cycle Detection:" << endl;
    while (head != nullptr && visited.find(head) == visited.end()) {
        cout << head->value << " -> ";
        visited.insert(head);
        head = head->next;
    }

    if (head != nullptr) {
        cout << "(Cycle detected at node with value " << head->value << ")";
    } else {
        cout << "NULL";
    }
    cout << endl;
    return 0;
}