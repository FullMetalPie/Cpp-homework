#ifndef BSTDATE_H
#define BSTDATE_H

#include <iostream>
#include "TreeNode.h"

using namespace std;

class BSTdate {
    private:
        TreeNode* root;
        /*DISTRUTTORE*/
        void destructor(TreeNode** root);
        /*INSERT*/
        void insert(TreeNode** root, Data date);
        /*SYMMETRICAL WALK*/
        void symmetricWalk(TreeNode* root);
        /*POST WALK*/
        void postWalk(TreeNode* root);
        /*PRE WALK*/
        void preWalk(TreeNode* root);
        /*MASSIMo*/
        Data maxRec(TreeNode* root);
    public:
        /*COSTRUTTORE*/
        BSTdate();
        /*HELPER DISTRUTTORE*/
        ~BSTdate();
        /*HELPER INSERT*/
        void insertHelper(Data date);
        /*HELPER SYMMETRICAL WALK*/
        void symmetricWalkHelper();
        /*HELPER POST WALK*/
        void postWalkHelper();
        /*HELPER PRE WALK*/
        void preWalkHelper();
        /*HELPER MASSIMO*/
        Data maxRecHelper();
};

#endif