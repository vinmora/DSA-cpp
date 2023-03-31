#include <iostream>
using namespace std;

/*
Program antrian mahasiswa yang mengurus sesuatu di TU , dengan NIM belakang (2-3). 
Maksimal antrian 10 orang.
*/

const int MAX_SIZE = 10;

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    bool isEmpty() {
        return front == -1 && rear == -1;
    }
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }
    void enqueue(int x) {
        if (isFull()) {
            cout << "Maaf, Antrian sudah penuh !\n";
            return;
        }
        else if (isEmpty()) {
            front = 0;
            rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = x;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong! \n";
            return;
        }
        else if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "Maaf, Antrian kosong\n";
            return -1;
        }
        return arr[front];
    }
    void print() {
        if (isEmpty()) {
            cout << "Antrian kosong \n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue antrian;

    antrian.enqueue(12);
    antrian.enqueue(99);
    antrian.enqueue(87);
    antrian.enqueue(64);
    antrian.enqueue(120);

    cout << "Daftar Antrian (nim): ";
    antrian.print();

    antrian.dequeue();
    antrian.dequeue();

    cout << "Antrian setelah 2 orang selesai: ";
    antrian.print();

    cout << "Antrian paling depan: " << antrian.peek() << endl;

    return 0;
}
