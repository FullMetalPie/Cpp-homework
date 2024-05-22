#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>

using namespace std;

class TreeNode {
    private:
        int info;
        int counter;
        TreeNode* right;
        TreeNode* left;
    public:
        /*COSTRUTTORI*/
        TreeNode();
        TreeNode(int data);
        TreeNode(int data, int p);
        TreeNode(int data, int p, TreeNode* r, TreeNode* l);
        /*SETTER e GETTER*/
        void setInfo(int data);
        void setPeso(int p);
        void setRight(TreeNode* r);
        void setLeft(TreeNode* l);

        int getInfo();
        int getPeso();
        TreeNode* getRight();
        TreeNode* getLeft();
        TreeNode** getPointerRight();
        TreeNode** getPointerLeft();
};

#endif