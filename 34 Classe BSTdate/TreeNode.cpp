#include <iostream>
#include "TreeNode.h"

using namespace std;

/*COSTRUTTORI*/
TreeNode::TreeNode() {
    right = nullptr;
    left = nullptr;
}
TreeNode::TreeNode(Data data) {
    info = data;
    right = nullptr;
    left = nullptr;
}
TreeNode::TreeNode(Data data, TreeNode* r, TreeNode* l) {
    info = data;
    right = r;
    left = l;
}
/*GETTER e SETTER*/
void TreeNode::setInfo(Data data) {
    info = data;
}
void TreeNode::setRight(TreeNode* r) {
    right = r;
}
void TreeNode::setLeft(TreeNode* l) {
    left = l;
}

Data TreeNode::getInfo() {
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