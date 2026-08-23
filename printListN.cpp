#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* head = NULL;

// Add an element to the list
void addList(int el) {
    Node* node = new Node(el);

    if (head == NULL) {
        head = node;
    } else {
        // Reach to the last
        Node* ptr = head;

        while (ptr->next) {
            ptr = ptr->next;
        }

        ptr->next = node;

    }
}


// Print elements from the nth position
void printListN(int n) {
    Node* ptr = head;

    // Skip elements upto n
    for (int i = 1; i < n; i++) {
        ptr = ptr->next;
    }

    // Print elements upto last element
    while (ptr) {
        cout << ptr->data;
        ptr = ptr->next;
    }
}

void printList() {
    Node* ptr = head;

    while (ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

}

int main() {

    // Create Linked list
    addList(3);
    addList(6);
    addList(2);
    addList(9);
    addList(8);

    // Display linked list
   // printList();

    // Display linked list from the nth position
   printListN(4); // Print list from n to last

    return 0;
}