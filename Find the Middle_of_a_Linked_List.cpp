#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

// Function to find the middle of the linked list
Node* findMiddle(Node* head) {
    if (!head) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;       // Move slow by one step
        fast = fast->next->next; // Move fast by two steps
    }

    return slow; // Slow is now at the middle
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    Node* middle = findMiddle(head);
    if (middle) {
        cout << "Middle element: " << middle->data << endl;
    }

    return 0;
}
