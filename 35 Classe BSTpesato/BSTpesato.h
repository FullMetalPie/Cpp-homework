#ifndef BSTPESATO_H
#define BSTPESATO_H

#include <iostream>
#include "TreeNode.h"

using namespace std;

class BSTpesato {
    private:
        TreeNode* root;
        /*DISTRUTTORE*/
        void destructor(TreeNode** root);
        /*INSERT*/
        void insert(TreeNode** root, int data);
        /*SYMMETRIC WALK*/
        void symmetricWalk(TreeNode* root);
        /*POST WALK*/
        void postWalk(TreeNode* root);
        /*PRE WALK*/
        void preWalk(TreeNode* root);
        /*SEARCH*/
        TreeNode* search(TreeNode* root, int x);
        /*SOMMA*/
        int sum(TreeNode* root);
    public:
        /*COSTRUTTORE*/
        BSTpesato();
        /*HELPER DISTRUTTORE*/
        ~BSTpesato();
        /*HELPER INSERT*/
        void insertHelper(int data);
        /*HELPER SYMMETRIC WALK*/
        void symmetricWalkHelper();
        /*HELPER POST WALK*/
        void postWalkHelper();
        /*HELPER PRE WALK*/
        void preWalkHelper();
        /*HELPER SEARCH*/
        TreeNode* searchHelper(int x);
        /*SOMMA CONTATORI*/
        int sumHelper();
};

#endif