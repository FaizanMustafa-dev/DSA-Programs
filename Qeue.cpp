#include <iostream>
using namespace std;
class Queue{
private:
    int front, rear, capacity;
    int* array;

public:
    Queue(int size){
        capacity=size;
        front=rear = -1;
        array=new int[capacity];
    }

    ~Queue() {
        delete[] array;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int item) {
        if (isFull()) {
           cout << "Queue is full, cannot enqueue.\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }

        array[rear] = item;
        std::cout << item << " enqueued to the queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty, cannot dequeue.\n";
            return;
        }

        int item = array[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }

        std::cout << item << " dequeued from the queue.\n";
    }

    void displayQueue() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return;
        }

        int i = front;
        std::cout << "Queue elements are: ";
        while (i != rear) {
            std::cout << array[i] << " ";
            i = (i + 1) % capacity;
        }
        std::cout << array[rear] << std::endl;
    }
};

int main() {
   

    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;

    Queue q(size);

    int choice, item;
    do {
        cout << "\nQueue Operations Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> item;
                q.enqueue(item);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.displayQueue();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != 4);

    return 0;
}

