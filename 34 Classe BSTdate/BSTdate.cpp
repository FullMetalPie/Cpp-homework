#include <iostream>
#include "BSTdate.h"

using namespace std;

/*COSTRUTTORE*/
BSTdate::BSTdate() {
    root = nullptr;
}
/*DISTRUTTORE*/
BSTdate::~BSTdate() {
    destructor(&root);
}
void BSTdate::destructor(TreeNode** root) {
    if (*root) {
        destructor((*root)->getPointerLeft());
        destructor((*root)->getPointerRight());
        delete *root;
        *root = nullptr;
    }
}
/*INSERT*/
void BSTdate::insertHelper(Data date) {
    insert(&root, date);
}
void BSTdate::insert(TreeNode** root, Data date) {
    if (*root == nullptr) {
        *root = new TreeNode(date);
    } else {
        if (confronta((*root)->getInfo(), date) == 2) {
            insert((*root)->getPointerRight(), date);
        } else if (confronta((*root)->getInfo(), date) == 1) {    
            insert((*root)->getPointerLeft(), date);
        }
    }
}
/*HELPER SYMMETRICAL WALK*/
void BSTdate::symmetricWalkHelper() {
    symmetricWalk(root);
}
void BSTdate::symmetricWalk(TreeNode* root) {
    if (root) {
        symmetricWalk(root->getLeft());
        cout << endl;
        root->getInfo().print();
        symmetricWalk(root->getRight());
    }
}
/*POST WALK*/
void BSTdate::postWalkHelper() {
    postWalk(root);
}
void BSTdate::postWalk(TreeNode* root) {
    if (root) {
        symmetricWalk(root->getLeft());
        symmetricWalk(root->getRight());
        cout << endl;
        root->getInfo().print();
    }
}
/*PRE WALK*/
void BSTdate::preWalkHelper() {
    preWalk(root);
}
void BSTdate::preWalk(TreeNode* root) {
    if (root) {
        cout << endl;
        root->getInfo().print();
        symmetricWalk(root->getLeft());
        symmetricWalk(root->getRight());
    }
}
/*MASSIMO*/
Data BSTdate::maxRecHelper() {
    return maxRec(root);
}
Data BSTdate::maxRec(TreeNode* root) {
    if (root->getRight() != nullptr) {
        return maxRec(root->getRight());
    }
    return root->getInfo();
}