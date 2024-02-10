#include <iostream>
#include "Node.h"

using namespace std;

/*COSTRUTTORI*/
Node::Node() {
    info = 0;
    ptrNext = nullptr;
}
Node::Node(int data) {
    info = data;
    ptrNext = nullptr;
}
Node::Node(int data, Node* next) {
    info = data;
    ptrNext = next;
}
/*SET e GET*/
int Node::getInfo() {
    return info;
}
Node* Node::getPtrNext() {
    return ptrNext;
}
void Node::setInfo(int data) {
    info = data;
}
void Node::setPtrNext(Node* next) {
    ptrNext = next;
}
void Node::setNode(int data, Node* next) {
    info = data;
    ptrNext = next;
}
