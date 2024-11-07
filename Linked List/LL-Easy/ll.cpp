#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
typedef struct node *NODE;

NODE insert(NODE head, int data)
{
    NODE new_node = (NODE)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        NODE current;
        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }
    return head;
}

NODE delete_end(NODE head)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    NODE curr = head;
    NODE prev = NULL;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
    return head;
}

NODE delete_any(NODE head,int data)
{
    if (head == NULL)
    {
        return head;
    }
    else{
        NODE curr;
        NODE prev = NULL;
        curr = head;
        while (curr != NULL) 
        {
            if (data == curr->data) 
            {
                if (prev == NULL) 
                {
                    head = curr->next;
                } else 
                {
                    prev->next = curr->next;
                }
                delete curr;
                curr = prev;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
    return head;
    }
}
void deleteAlt( NODE head) {
    if (head == NULL) return;
    
    NODE curr = head;
    
    while (curr != NULL && curr->next != NULL) {
        curr->next = curr->next->next;
        if (curr->next != NULL) {
            curr = curr->next; 
        } else {
            break;
        }
    }
}
void Print_data(NODE head)
{
    NODE temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    NODE A = NULL;
    cout << "Linked List is empty" << endl;
    cout << "Enter the number of elements in the LL = ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data = 0;
        cin >> data;
        A = insert(A, data);
    }
    cout << "Before deletion" << endl;
    Print_data(A);
    A = delete_end(A);
    cout << "After deletion" << endl;
    Print_data(A);
    int del;
    cout<<"enter the element to be deleted"<<endl;
    cin>>del;
    delete_any(A,del);
    Print_data(A);
    return 0;
}