#include <iostream>
#include "List.h"

using namespace std;

List::List() {
    head = nullptr;
}
List::~List() {
    Node* pCancel = head;

    while (head != nullptr) {
        head = head->getPtrNext();
        delete pCancel;
        pCancel = head;
    }
}
bool List::isEmpty() {
    if (head == nullptr) {
        return true;
    } else {
        return false;
    }
}
void List::display() {
    Node* pAux = head;
    if (head == nullptr) {
        cout << "Lista vuota." << endl;
    } else {
        while (pAux != nullptr) {
            cout << pAux->getInfo() << ", ";
            pAux = pAux->getPtrNext();
        }
    }
}
bool List::insertHead(int data) {
    Node* pNew = new Node(data, head);

    if (!pNew) {
        cerr << "Allocazione fallita!";
        return false;
    }
    head = pNew;
    return true;
}

bool List::insertTail(int data) {
    Node* pNew = new Node(data);
    if (!pNew) {
        cerr << "Allocazione fallita!";
        return false;
    }

    if (isEmpty()) {

    } else {
        Node* pAux = head;
        while(pAux->getPtrNext() != nullptr) {
            pAux = pAux->getPtrNext();
        }
        pAux->setPtrNext(pNew);
    }
    return true;
}

bool List::remove(int data) {
    bool flag = false;
    if (isEmpty()) {
        Node* pCancel;
        if (data == head->getInfo()) {
        /*ELEMENTO DA CANCELLARE E' IL PRIMO*/
            pCancel = head;
            head = head->getPtrNext();
            delete pCancel;
            flag = true;
        } else {
        /*ELEMENTO DA CANCELLARE SUCCESSIVO AL PRIMO*/
            Node* pCurrent;
            pCancel = head->getPtrNext();
            pCurrent = head;
            while (pCancel != nullptr && pCancel->getInfo() != data) {
                pCurrent = pCurrent->getPtrNext();
                pCancel = pCancel->getPtrNext();
            }
        }
    }


    return flag;
}
