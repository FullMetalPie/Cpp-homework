#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
#include "Data.h"

using namespace std;

class TreeNode {
    private:
        Data info;
        TreeNode* right;
        TreeNode* left;
    public:
        /*COSTRUTTORI*/
        TreeNode();
        TreeNode(Data data);
        TreeNode(Data data, TreeNode* r, TreeNode* l);
        /*GETTER e SETTER*/
        void setInfo(Data data);
        void setRight(TreeNode* r);
        void setLeft(TreeNode* l);

        Data getInfo();
        TreeNode* getRight();
        TreeNode* getLeft();
        TreeNode** getPointerRight();
        TreeNode** getPointerLeft();
};


#endif