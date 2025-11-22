#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* copyList(Node* head) {
    if (head == nullptr)
        return nullptr;

    Node* newNode = new Node();
    newNode->data = head->data;
    newNode->next = copyList(head->next);
    return newNode;
}

int main() {
    Node *head = new Node{1, new Node{2, new Node{3, nullptr}}};

    Node *copyHead = copyList(head);

    Node* p = copyHead;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}

