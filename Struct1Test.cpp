#include <iostream>
using namespace std;

struct Node{
    int binerNodes[100];
    int oktalNodes[100];
    string hexaNodes[100];
    int counterBiner ;
    int counterOktal ;
    int counterHexa ;
    Node* next;
    Node* prev;
};

int main(){
    Node *head = new Node();
    Node *last = new Node();
    Node *curr = new Node();
    Node *newNode = new Node();
    Node *point = new Node();


    head->counterBiner = 1;
    head->counterHexa  = 10;
    newNode->binerNodes[15] = {0};
    last->next = NULL;
    last->prev = NULL;
    point->prev = NULL;
return 0;
}