#include<iostream>
using namespace std;

// Node class to represent each element in the linked list
class Node {
public:
    int data;       // Stores the data value
    Node* next;     // Pointer to the next node
    Node(int val) { // Constructor to initialize node
        data = val;
        next = nullptr;
    }
};

// List class to manage the linked list
class list {
    Node* head;     // Pointer to the first node
    Node* tail;     // Pointer to the last node
public:
    // Constructor to initialize empty list
    list() {
        head = tail = nullptr;
    }

    // Destructor to free all nodes
    ~list() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }

    // Add node with value at the front
    void push_front(int val) {
        Node* newnode = new Node(val);
        if (head == nullptr) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    // Add node with value at the back
    void push_back(int val) {
        Node* newnode = new Node(val);
        if (head == nullptr) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Remove node from the front
    void pop_front() {
        if (head == nullptr) {
            cout << "The list is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr) {
            tail = nullptr; // Update tail if list becomes empty
        }
    }

    // Remove node from the back
    void pop_back() {
        if (head == nullptr) {
            cout << "The list is empty" << endl;
            return;
        }
        if (head == tail) { // Single node case
            delete head;
            head = tail = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next != tail) { // Find second-to-last node
            temp = temp->next;
        }
        delete tail;        // Delete tail node
        tail = temp;        // Update tail
        tail->next = nullptr; // Set new tail's next to nullptr
    }
    void insert(int val,int pos){
        if (pos<0){
            cout<<"Invalid";
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp=head;
        for (auto i=0;i<pos-1;i++){
            if(temp==nullptr){
                cout<<"Out of bound";
                return;
            }
            temp=temp->next;
        }
        Node* newnode=new Node(val);
        newnode->next=temp->next;
        temp->next=newnode;
    }

    // Print all nodes in the list
    void printll() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl; // Add newline for clean output
    }
    int search(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=nullptr){
            if(temp->data){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
       
    }
};

// Main function to test the linked list
int main() {
    list ll;
    ll.push_front(12);  // List: 12
    ll.push_front(13);  // List: 13 -> 12
    ll.push_back(14);  
    ll.push_back(14);  // List: 13 -> 12 -> 14
    ll.pop_front();     // List: 12 -> 14
    ll.pop_back();      // List: 12
    cout<<ll.search(12);
    ll.printll();       // Output: 12
    return 0;
}