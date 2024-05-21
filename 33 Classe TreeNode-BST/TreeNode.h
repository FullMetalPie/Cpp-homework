#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>

using namespace std;

class TreeNode {
    private:
        int info;
        TreeNode* left;
        TreeNode* right;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        TreeNode();
        TreeNode(int data);
        TreeNode(int data, TreeNode* rx, TreeNode* lx);
        ~TreeNode();
        /*SETTER e GETTER*/
        void setInfo(int data);
        void setRight(TreeNode* rx);
        void setLeft(TreeNode* lx);
        void setNode(int data, TreeNode* rx, TreeNode* lx);

        int getInfo();
        TreeNode* getLeft();
        TreeNode* getRight();
        TreeNode** getPointerLeft();
        TreeNode** getPointerRight();
};

#endif
