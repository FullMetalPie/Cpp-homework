#include <iostream>
#include "BSTpesato.h"

using namespace std;

/*COSTRUTTORE*/
BSTpesato::BSTpesato() {
    root = nullptr;
}
/*DISTRUTTORE*/
BSTpesato::~BSTpesato() {
    destructor(&root);
}
void BSTpesato::destructor(TreeNode** root) {
    if (*root) {
        destructor((*root)->getPointerLeft());
        destructor((*root)->getPointerRight());
        delete *root;
        *root = nullptr;
    }
}
/*INSERT*/
void BSTpesato::insertHelper(int data) {
    insert(&root, data);
}
void BSTpesato::insert(TreeNode** root, int data) {
    if (*root == nullptr) {
        cout << "Nodo radice creato.";
        *root = new TreeNode(data);
    } else {
        if ((*root)->getInfo() == data) {
            (*root)->setPeso((*root)->getPeso() + 1);
        } else if (data > (*root)->getInfo()) {
            insert((*root)->getPointerRight(), data);
        } else if (data < (*root)->getInfo()) {
            insert((*root)->getPointerLeft(), data);
        }
    }
}
/*SYMMETRIC WALK*/
void BSTpesato::symmetricWalkHelper() {
    symmetricWalk(root);
}
void BSTpesato::symmetricWalk(TreeNode* root) {
    if (root) {
        symmetricWalk(root->getLeft());
        cout << endl << root->getInfo();
        symmetricWalk(root->getRight());
    }
}
/*POST WALK*/
void BSTpesato::postWalkHelper() {
    postWalk(root);
}
void BSTpesato::postWalk(TreeNode* root) {
    if (root) {
        postWalk(root->getLeft());
        postWalk(root->getRight());
        cout << endl << root->getInfo();
    }
}
/*PRE WALK*/
void BSTpesato::preWalkHelper() {
    preWalk(root);
}
void BSTpesato::preWalk(TreeNode* root) {
    if (root) {
        cout << endl << root->getInfo();
        preWalk(root->getLeft());
        preWalk(root->getRight());
    }
}
/*SEARCH*/
TreeNode* BSTpesato::searchHelper(int data) {
    return search(root, data);
}
TreeNode* BSTpesato::search(TreeNode* root, int data) {
    if (root == nullptr || root->getInfo() == data) {
        return root;
    } else {
        if (data < root->getInfo()) {
            search(root->getLeft(), data);
        } else if (data > root->getInfo()) {
            search(root->getRight(), data);
        }
    }
}
/*SOMMA CONTATORI*/
int BSTpesato::sumHelper() {
    sum(root);
}
int BSTpesato::sum(TreeNode* root) {
    if (root) {
        return sum(root->getLeft()) + root->getInfo() + sum(root->getRight());
    }
    return 0;
}