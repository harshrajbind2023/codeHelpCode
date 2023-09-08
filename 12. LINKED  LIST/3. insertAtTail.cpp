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

// Insert a node at the end of the linked list
void insertAtTail(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Step 1: create a new node
    Node* newNode = new Node(data);
    // Step 2: connect with the tail node
    tail->next = newNode;
    // Step 3: update tail
    tail = newNode;
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

        // Insert nodes at tail
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);


    // Print the linked list
    print(head);

    return 0;
}
