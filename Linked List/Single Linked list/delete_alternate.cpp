#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *next;
}*Node;
Node Create_node(int data)
{
    Node new_node = new node;
    new_node->data = data;
    new_node->next =NULL;
    return new_node;
}
Node insert_end(Node head,int data)
{
    Node new_node = Create_node(data);
    if(head == NULL)
    {
        head = new_node;
    }
    else if(head->next == NULL)
    {
        head->next = new_node;
    }
    else{
        Node temp=head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    return head;
}
Node Delete_Alternate(Node head)
{
    if(head == NULL)
    {
        return head;
    }
    Node temp = head;
    while(temp != NULL && temp->next != NULL)
    {
        temp->next = temp->next->next;
        if(temp->next != NULL)
        {
            temp = temp->next;
        }
        else
        {
            break;
        }
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
int main()
{
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
    Delete_Alternate(head);
    printList(head);
}