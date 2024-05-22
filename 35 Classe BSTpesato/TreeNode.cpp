#include <iostream>
#include "TreeNode.h"

using namespace std;

/*COSTRUTTORI*/
TreeNode::TreeNode() {
    info = 0;
    counter = 0;
    right = nullptr;
    left = nullptr;
}
TreeNode::TreeNode(int data) {
    info = data;
    counter = 0;
    right = nullptr;
    left = nullptr;
}
TreeNode::TreeNode(int data, int p) {
    info = data;
    counter = p;
    right = nullptr;
    left = nullptr;
}
TreeNode::TreeNode(int data, int p, TreeNode* r, TreeNode* l) {
    info = data;
    counter = p;
    right = r;
    left = l;
}
/*SETTER e GETTER*/
void TreeNode::setInfo(int data) {
    info = data;
}
void TreeNode::setPeso(int p) {
    counter = p;
}
void TreeNode::setRight(TreeNode* r) {
    right = r;
}
void TreeNode::setLeft(TreeNode* l) {
    left = l;
}

int TreeNode::getInfo() {
    return info;
}
int TreeNode::getPeso() {
    return counter;
}
TreeNode* TreeNode::getRight() {
    return right;
}
TreeNode* TreeNode::getLeft() {
    return left;
}
TreeNode** TreeNode::getPointerRight() {
    return &right;
}
TreeNode** TreeNode::getPointerLeft() {
    return &left;
}