#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // Destructor to delete a node
    ~Node() {
        cout << "Node with value: " << this->data << " deleted" << endl;
    }
};

// Insert a node at the head of the linked list
void insertAtHead(Node* &head, Node* &tail, int data) {
    // Check for empty linked list
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        // Step 1: create a new node
        Node* newNode = new Node(data);
        // Step 2: connect with the head node
        newNode -> next = head;
        // Step 3: update head
        head = newNode;
    }
}


// Print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Insert nodes at head
    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 3);

    // Print the linked list
    print(head);

    return 0;
}
