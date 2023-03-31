#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = NULL;
    }

    // operasi sisip
    void insert(int value) {
        Node* new_node = new Node();
        new_node->data = value;
        new_node->next = NULL;

        if (head == NULL || value < head->data) {
            new_node->next = head;
            head = new_node;
            cout << "Simpul berhasil disisip pada awal list" << endl;
            return;
        }

        Node* current = head;
        while (current->next != NULL && current->next->data < value) {
            current = current->next;
        }

        if (current->data == value) {
            cout << "Simpul sudah ada (duplikat)" << endl;
            return;
        }

        new_node->next = current->next;
        current->next = new_node;
        cout << "Simpul berhasil disisip pada posisi tertentu" << endl;
    }

    // operasi hapus
    void remove(int value) {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Simpul berhasil dihapus pada awal list" << endl;
            return;
        }

        Node* current = head;
        while (current->next != NULL && current->next->data != value) {
            current = current->next;
        }

        if (current->next == NULL) {
            cout << "Simpul tidak ditemukan" << endl;
            return;
        }

        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
        cout << "Simpul berhasil dihapus pada posisi tertentu" << endl;
    }

    // menampilkan isi linked list
    void display() {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }

        Node* current = head;
        while (current != NULL) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    // mengisi linked list
    list.insert(5);
    list.insert(10);
    list.insert(3);
    list.insert(7);
    list.insert(8);
    list.insert(2);

    // menampilkan isi linked list
    list.display();

    // menghapus simpul pada posisi tertentu
    list.remove(7);

    // menampilkan isi linked list setelah penghapusan
    list.display();

    return 0;
}
