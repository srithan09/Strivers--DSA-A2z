#include <iostream>
using namespace std;

typedef struct node {
    int data;
    node *next;
} *Node;

Node Create_data(int data) {
    Node new_node = new node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

Node Insert_end(Node head, int data) {
    Node n1 = Create_data(data);
    if (head == NULL) {
        head = n1;
    } else {
        Node temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n1;
    }
    return head;
}

Node delete_kth(Node head, int k) {
    if (head == NULL) {
        return head;
    }
    
    if (k == 1) {
        Node curr = head;
        head = head->next;
        delete curr;
        return head;
    }
    
    Node temp = head;
    Node prev = NULL;
    int count = 0; 
    while(temp->next != NULL)
    {
        count++;
        if(count == k)
        {
            prev->next = temp->next;
            temp->next = NULL;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

void printList(Node head) {
    Node curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n; 
    Node head = NULL;
    
    for (int i = 0; i < n; i++) {
        int data = 0;
        cout << "Enter element " << (i + 1) << ": ";
        cin >> data;
        head = Insert_end(head, data);
    }
    cout << "The linked list is: ";
    printList(head);
    int k;
    cout << "Enter the position to delete (1-based index): ";
    cin >> k;
    head = delete_kth(head, k);
    cout << "The linked list after deletion is: ";
    printList(head);
    
    return 0;
}