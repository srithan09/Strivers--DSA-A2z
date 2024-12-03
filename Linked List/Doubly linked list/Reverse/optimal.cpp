#include<bits/stdc++.h>
using namespace std;
typedef struct node {
    node *prev;
    int data;
    node *next;
} *Node;

Node create_node(int data) {
    Node new_node = new node; 
    new_node->data = data;    
    new_node->next = NULL;   
    new_node->prev = NULL;    
    return new_node;
}

Node insert_end(Node head, int data) {
    Node new_node = create_node(data); 
    if (head == NULL) {
        head = new_node;
    } else {
        Node curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = new_node; 
        new_node->prev = curr; 
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
Node reverse_DLL(Node head)
{
    if(head == NULL || head->next ==NULL)
    {
        return head;
    }
    Node current = head;
    Node previous = NULL;
    while(current !=NULL)
    {
        previous = current->prev;
        current->prev = current->next;
        current->next = previous;
        
        current = current->prev;
    }
    head = previous->prev;
    return head;
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
        head = insert_end(head, data); 
    }
    cout << "The linked list is: ";
    printList(head); 
    head = reverse_DLL(head);
    printList(head);
    return 0;
}