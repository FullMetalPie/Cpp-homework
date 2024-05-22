#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>

using namespace std;

class TreeNode {
    private:
        int info;
        TreeNode* right;
        TreeNode* left;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        TreeNode();
        TreeNode(int data);
        TreeNode(int data, TreeNode* r, TreeNode* l);
        /*SETTER e GETTER*/
        void setInfo(int data);
        void setRight(TreeNode* r);
        void setLeft(TreeNode* l);

        int getInfo();
        TreeNode* getRight();
        TreeNode* getLeft();
        TreeNode** getPointerRight();
        TreeNode** getPointerLeft();
};

#endif