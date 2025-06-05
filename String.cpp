#include <iostream>

class Stack {
private:
    static const int MAX_SIZE = 1000;
    int top;
    int data[MAX_SIZE];

public:
    Stack() : top(-1) {}

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "Stack overflow!" << std::endl;
            return;
        }
        data[++top] = value;
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow!" << std::endl;
            return -1; // Returning -1 for simplicity, consider using exceptions
        }
        return data[top--];
    }
};

class QueueUsingStack {
private:
    Stack inbox;   // For enqueue operation
    Stack outbox;  // For dequeue operation

public:
    void enqueue(int value) {
        inbox.push(value);
    }

    int dequeue() {
        if (outbox.isEmpty()) {
            // Transfer elements from inbox to outbox for dequeue
            while (!inbox.isEmpty()) {
                outbox.push(inbox.pop());
            }
        }

        if (outbox.isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return -1;
        }

        return outbox.pop();
    }

    bool isEmpty() {
        return inbox.isEmpty() && outbox.isEmpty();
    }
};

int main() {
    QueueUsingStack q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    std::cout << q.dequeue() << std::endl; // Output: 1
    std::cout << q.dequeue() << std::endl; // Output: 2

    q.enqueue(4);
    q.enqueue(5);

    std::cout << q.dequeue() << std::endl; // Output: 3
    std::cout << q.dequeue() << std::endl; // Output: 4
    std::cout << q.dequeue() << std::endl; // Output: 5

    std::cout << q.dequeue() << std::endl; // Output: Queue is empty, -1

    return 0;
}

