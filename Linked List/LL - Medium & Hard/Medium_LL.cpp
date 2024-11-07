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
void Middle_Element(NODE head)
{
    NODE fast = head;
    NODE slow = head;  
    while(fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"the middle element =";
    cout<<slow->data<<endl;
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
    Print_data(A);
    Middle_Element(A);
}