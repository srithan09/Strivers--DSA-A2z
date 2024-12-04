#include <iostream>
using namespace std;

class Queue {
private:
    int size;
    int *Q;
    int start;
    int end;
    int cursize;

public:
    Queue(int size) {
        this->size = size;
        this->start = -1;
        this->end = -1;
        this->Q = new int[size];
        this->cursize = 0;
    }

    ~Queue() {
        delete[] Q; // Free the allocated memory
    }

    void push(int x) {
        if (cursize == size) {
            cout << "queue is full" << endl;
            return; // Return early if the queue is full
        }
        if (cursize == 0) {
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % size;
        }
        Q[end] = x;
        cursize++;
    }

    int pop() {
        if (cursize == 0) {
            cout << "queue is empty" << endl;
            return -1; // Return an invalid value or throw an exception
        }
        int element = Q[start];
        if (cursize == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % size; // Increment start index
        }
        cursize--;
        return element;
    }

    int top() {
        if (cursize == 0) {
            cout << "there is no element" << endl;
            return -1; // Return an invalid value or throw an exception
        }
        return Q[start];
    }

    int isEmpty() {
        return cursize == 0;
    }

    int isFull() {
        return cursize == size;
    }
};

int main() {
    Queue q(5); // Create a queue of size 5

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // Try to push another element to check if the queue is full
    q.push(60); // This should print "queue is full"

    // Check the top element
    cout << "Top element: " << q.top() << endl; // Should print 10

    // Pop elements from the queue
    cout << "Popped element: " << q.pop() << endl; // Should print 10
    cout << "Popped element: " << q.pop() << endl; // Should print 20

    // Check if the queue is empty
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Should print "No"

    // Pop more elements
    cout << "Popped element: " << q.pop() << endl; // Should print 30
    cout << "Popped element: " << q.pop() << endl; // Should print 40
    cout << "Popped element: " << q.pop() << endl; // Should print 50

    // Check if the queue is empty now
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Should print "Yes"

    // Try to pop from an empty queue
    cout << "Popped element: " << q.pop() << endl; // This should print "queue is empty"

    return 0;
}