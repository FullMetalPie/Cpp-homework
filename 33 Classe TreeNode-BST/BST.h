#ifndef BST_H
#define BST_H

#include <iostream>
#include "TreeNode.h"

using namespace std;

class BST {
    private:
        TreeNode* root;
        /*DISTRUTTORE*/
        void destructor(TreeNode** root);
        /*INSERIMENTO*/
        void insert(TreeNode** root, int x);    //passiamo root per doppio puntatore perche' dobbiamo modificarlo
        /*SEARCH*/
        TreeNode* search(TreeNode* root, int x);
        /*REMVOE*/
        void remove(TreeNode** root, int x);
        void pred(TreeNode** root, TreeNode** pcanc);
        /*MASSSIMO e MINIMO*/
        int maxRec(TreeNode* root);
        int minRec(TreeNode* root);
        /*SYMMETRIC WALK*/
        void symmetricWalk(TreeNode* root);
        /*POST WALK*/
        void postWalk(TreeNode* root);
        /*PRE WALK*/
        void preWalk(TreeNode* root);
    public:
        /*COSTRUTTORE*/
        BST();
        /*HELPER DISTRUTTORE*/
        ~BST();
        /*HELPER INSERIMENTO*/
        void insertHelper(int x);
        /*HELPER SEARCH*/
        void searchHelper(int x);
        /*HELPER REMOVE*/
        void removeHelper(int x);
        /*HELPER MASSIMO e MINIMO*/
        void maxRecHelper();
        void minRecHelper();
        /*HELPER SYMMETRIC WALK*/
        void symmetricWalkHelper();
        /*HELPER POST WALK*/
        void postWalkHelper();
        /*HELPER PRE WALK*/
        void preWalkHelper();
};

#endif