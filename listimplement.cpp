#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

//Push Front Function
void push_front(Node*& head, Node*& tail, int data) {
    // Check if the list is empty
    if (head == nullptr) {
        // Create a new node
        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = nullptr;  // New node is the only node, so next is nullptr

        // Both head and tail point to the new node
        head = new_node;
        tail = new_node;
    } else {
        // List is not empty, add to the front
        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }
}

//Push Back Function
void push_back(Node*& head, Node*& tail, int data) {
    // Check if the list is empty
    if (head == nullptr) {
        // Create a new node
        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = nullptr;  // New node is the only node, so next is nullptr

        // Both head and tail point to the new node
        head = new_node;
        tail = new_node;
    } else {
        // List is not empty, add to the front
        Node* new_node = new Node;
        new_node->data = data;
        tail->next = new_node;
        tail = new_node;
    }
}

//Insert Implementation
void insert(Node*& head, Node*& tail, int data, int position) {
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = nullptr;

    // Case 1: Insert at the front
    if (position == 0) {
        push_front(head, tail, data);
        return;
    }

    // Traverse to the desired position
    Node* temp = head;
    int current_pos = 0;
    while (temp != nullptr && current_pos < position - 1) {
        temp = temp->next;
        current_pos++;
    }

    // Case 2: Insert at the end if the position is beyond the current list length
    if (temp == nullptr || temp->next == nullptr) {
        push_back(head, tail, data);
        return;
    }

    // Case 3: Insert in the middle
    new_node->next = temp->next;
    temp->next = new_node;
}


//Search Algorithm
int search(Node*& head, int value) {
    Node* temp = head;  // Create copy of head, so original head points to first part of list.

    while (temp != nullptr) {
        if (temp->data == value) {  // Check if the data in the current node matches the value
            return 1;  // Return 1 if the value is found
        }
        temp = temp->next;  // Move to the next node
    }

    return -1;  // If we traverse the whole list and don't find the value, return -1
}


int main() {
    Node* one = new Node;
    Node* two = new Node;
    Node* three = new Node;

    // Setting data
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Assigning pointers
    one->next = two;
    two->next = three;
    three->next = nullptr;

    Node* head = one;
    Node* tail = three;

    // Use a temporary pointer to traverse the list
    Node* temp = head;
    cout << "Original List:" << endl;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Call push_front to add a new element at the front
    push_front(head, tail, 42);

    // Reset temp to head to print the updated list
    temp = head;  // Reset temp to the start of the list
    cout << "List after push front:" << endl;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Call push_back to add a new element at the back
    push_back(head, tail, 77);
    cout << "List after push back:" << endl;
    temp = head;  // Reset temp to the start of the list
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;


    //Insertion into a random spot in the list
    insert(head, tail, 33,2);
    cout << "List after insert:" << endl;
    temp = head;  // Reset temp to the start of the list
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    //Search 

    //Search for an element in the list
    int result= search(head, 33);
    
    if (result == 1) {
    cout << "Value 33 found in the list." << endl;
    } else {
    cout << "Value 33 not found in the list." << endl;
    }

    return 0;
}