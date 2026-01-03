class Node {
        int data;
        Node next;
        Node(int data)
        {
            this.data = data;
            this.next = null;
        }
    }
public class Solution {
    Node head;
    public void InsertAtBegin(int data)
    {
        Node newNode = new Node(data);
        if(head == null)
        {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }
    public void InsertAtEnd(int data)
    {
        Node newNode = new Node(data);
        if(head == null)
        {
            head = newNode;
            return;
        }
        Node temp = head;
        while(temp.next != null)
        {
            temp = temp.next;
        }
        temp.next = newNode; 
    }
    public void deleteAtEnd()
    {
        if(head == null || head.next == null)
        {
            head = null;
            return ;
        }
        Node curr = head;
        while (curr.next.next != null) {
            curr = curr.next;
        }
        curr.next = null;
    }
    public void deleteAtPosition(int pos)
    {
        if(pos<1)
        {
            System.out.println("Invalid Index");
        }
        if(pos ==1)
        {
            head = null;
            return;
        }
        Node temp = head;
        for(int i = 1;i<pos-1 && temp != null ;i++)
        {
            temp = temp.next;
        }
        if(temp == null)
        {
            System.out.println("Invalid Index");
            return;
        }
        temp.next = temp.next.next;
    }
    public void InsertAtPosition(int data,int pos)
    {
        Node newNode = new Node(data);
        if(pos == 1)
        {
            newNode.next = head;
            head = newNode;
            return;
        }
        if(pos<1)
        {
            System.out.println("Inavlid index");
            return;
        }
        Node temp = head;
        for(int i=1;i<pos-1 && temp != null ;i++)
        {
            temp = temp.next;
        }
        if(temp == null)
        {
            System.out.println("Invalid Index");
            return;
        }
        newNode.next = temp.next;
        temp.next = newNode;
    }
    public static void main(String[] args) {
        
    }
}
