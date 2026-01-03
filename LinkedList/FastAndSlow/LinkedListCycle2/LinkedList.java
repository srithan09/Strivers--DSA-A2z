class Node {
        int data;
        Node next;
        Node(int data)
        {
            this.data = data;
            this.next = null;
        }
    }
public class LinkedList {
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
    public Node detectCycle() {
        Node slow = head;
        Node  fast = head;
        while(fast!= null && fast.next != null)
        {
            fast = fast.next.next;
            slow = slow.next;
            if(slow == fast)
            {
                slow = head;
                while(fast != slow)
                {
                    slow = slow.next;
                    fast = fast.next;
                }
                return slow;
            }
        }
        return null;
    }
    
    public static void main(String[] args) {
    LinkedList list = new LinkedList();

        list.InsertAtEnd(10);
        list.InsertAtEnd(20);
        list.InsertAtEnd(30);
        list.InsertAtEnd(40);

        list.InsertAtPosition(25, 3);
        list.deleteAtEnd();
        list.deleteAtPosition(2);

        // 🔁 CREATE CYCLE: last node → node with value 20
        Node temp = list.head;
        Node cyclePoint = null;

        while (temp.next != null) {
            if (temp.data == 20) {
                cyclePoint = temp;
            }
            temp = temp.next;
        }
        temp.next = cyclePoint; // cycle created

        Node cycleStart = list.detectCycle();
        if (cycleStart != null) {
            System.out.println("Cycle detected at node: " + cycleStart.data);
        } else {
            System.out.println("No cycle detected");
        }

}

}
