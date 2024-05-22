#include <iostream>
#include "TreeNode.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
TreeNode::TreeNode() {
    info = 0;
    right = nullptr;
    left = nullptr;
}
TreeNode::TreeNode(int data) {
    info = data;
    right = nullptr;
    left = nullptr;
}
TreeNode::TreeNode(int data, TreeNode* r, TreeNode* l) {
    info = data;
    right = r;
    left = l;
}
/*SETTER e GETTER*/
void TreeNode::setInfo(int data) {
    info = data;
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