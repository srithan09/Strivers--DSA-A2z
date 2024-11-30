#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *next;
}*Node;

Node create_node(int data)
{
    Node new_node = new node;
    new_node->data=data;
    new_node->next = NULL;
    return new_node;
}
Node Insert_end(Node head,int data)
{
    Node new_node=create_node(data);
    if(head == NULL)
    {
        head = new_node;
    }
    else{
        Node temp=head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    return head;
}
Node delete_front(Node head)
{
    if(head  == NULL)
    {
        return head;
    }
    else if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else{
        Node curr = head;
        head = head->next;
        curr->next = NULL;
        delete curr;
        return head;
    }
}
void printList(Node head)
{
    Node curr = head;
    while(curr!= NULL)
    {
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}
int main()
{
    int n;
    cin>>n; //number of elements in the linkedlsit
    Node n1 = NULL;
    for(int i=0;i<n;i++)
    {
        int data=0;
        cin>>data;
        n1=Insert_end(n1,data);
    }
    printList(n1);
    n1=delete_front(n1);
    printList(n1);
    return 0;
}