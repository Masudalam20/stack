#include <iostream>
using namespace std;

class Queue {
private:
    int queue[5];
    int frontIndex, rearIndex, size;
const int maxSize = 5;
public:
    Queue() {


        frontIndex = 0;
        rearIndex = -1;
        size = 0;
    }

    //~Queue() {
       // delete[] queue;
    //}

    void enqueue(int value) {
        if (size == maxSize) {
            // The queue is full, overwrite the oldest item
            cout << queue[frontIndex] << " replaced by " << value << endl;
            queue[frontIndex] = value;
            frontIndex ++; //(frontIndex + 1) % maxSize;  // Move front to next position
            rearIndex++; //= (rearIndex + 1) % maxSize;

        } else rearIndex ++;// = (rearIndex + 1) % maxSize;
            queue[rearIndex] = value;
            size++;

        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow! Cannot dequeue from an empty queue." << endl;
        } else {
            int dequeuedValue = queue[frontIndex];
            frontIndex++;// = (frontIndex + 1) % maxSize;
            size--;
            cout << dequeuedValue << " dequeued" << endl;
        }
    }

    int front() {
        if (isEmpty()) {
            cout << "Queue is empty, no front element." << endl;
            return -1;  // Error value, handle this case in main program
        }
        cout << queue[frontIndex] << " is at the front" << endl;
        return queue[frontIndex];
    }

    int rear() {
        if (isEmpty()) {
            cout << "Queue is empty, no rear element." << endl;
            return -1;  // Error value, handle this case in main program
        }
        cout << queue[rearIndex] << " is at the rear" << endl;
        return queue[rearIndex];
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {

    Queue q;

    q.enqueue(10);  // 10 enqueued
    q.enqueue(20);  // 20 enqueued
    q.enqueue(30);  // 30 enqueued
    q.enqueue(40);  // 40 enqueued
    q.enqueue(50);  // 50 enqueued
    q.enqueue(60);  // 10 replaced by 60

    q.dequeue();    // 20 dequeued
    q.front();      // 30 is at the front
    q.enqueue(70);  // 70 enqueued
    q.rear();       // 70 is at the rear

    return 0;
}
