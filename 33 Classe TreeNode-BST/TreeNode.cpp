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
TreeNode::TreeNode(int data, TreeNode* rx, TreeNode* lx) {
    info = data;
    right = rx;
    left = lx;
}
/*SETTER e GETTER*/
void TreeNode::setInfo(int data) {
    info = data;
}
void TreeNode::setRight(TreeNode* rx) {
    right = rx;
}
void TreeNode::setLeft(TreeNode* lx) {
    left = lx;
}
void TreeNode::setNode(int data, TreeNode* rx, TreeNode* lx) {
    info = data;
    right = rx;
    left = lx;
}

int TreeNode::getInfo() {
    return info;
}
TreeNode* TreeNode::getLeft() {
    return left;
}
TreeNode* TreeNode::getRight() {
    return right;
}