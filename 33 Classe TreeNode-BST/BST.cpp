#include <iostream>
#include "BST.h"

using namespace std;

/*COSTRUTTORE*/
BST::BST() {
    root = nullptr;
}
/*DISTRUTTORE*/
BST::~BST() {
    //Passo per reference perche' devo modificare l'indirizzo di memoria
    destructor(&root);
}
void BST::destructor(TreeNode** root) {
    //controllo che non sia gia' nullptr
    if (*root) {
        destructor((*root)->getPointerRight()); //Dealloco destra
        destructor((*root)->getPointerLeft());  //Dealloco sinistra
        delete *root;                           //Dealloco questo nodo
        *root = nullptr;                        //Imposto questo nodo a nullptr
    }
}
/*INSERIMENTO*/
void BST::insertHelper(int x) {
    insert(&root, x);
}

void BST::insert(TreeNode** root, int x) {
    if (!*root) {                                   //Se e' nullptr
        *root = new TreeNode(x);                    //Crea nuovo nodo
    } else {                                        //Se non e' nullptr
        if (x > (*root)->getInfo()) {               //E se x > informazione di questo nodo
            insert((*root)->getPointerRight(), x);  //allora inseriscia  destra
        } else if (x < (*root)->getInfo()) {        
            insert((*root)->getPointerLeft(), x);   //se no a sinistra
        }
    }  
}
/*HELPER SEARCH*/
void BST::searchHelper(int x) {
    search(root, x);
}
TreeNode* BST::search(TreeNode* root, int x) {
    //BASE                                          
    if (root == nullptr || root->getInfo() == x) {  //Se root e' vuoto oppure se ha trovato il contenuto 
        return root;                                //Ritorna root
    } else {
        if (x < root->getInfo()) {                  //Se invece e' minore...
            return search(root->getLeft(), x);      //Cerca verso sinistra
        } else {
            return search(root->getRight(), x);     //Oppure verso destra se e' maggiore
        }
    }
}
/*HELPER REMOVE*/
void BST::removeHelper(int x) {
    remove (&root, x);
}
void BST::remove(TreeNode** root, int x) {
    if (*root == nullptr) {                             //Controllo se la struttura e' vuota
        cout << "Albero vuoto.";                    
    } else {                                            //Se non lo e'...
        if (x < (*root)->getInfo()) {                   //
            remove((*root)->getPointerLeft(), x);       // Solita cosa destra/sinistra
        } else if (x > (*root)->getInfo()) {            //
            remove((*root)->getPointerRight(), x);      //
        } else {                                        //Se invece ci troviamo sul nodo da eliminare (quindi x = valore nel nodo attuale)
            TreeNode* pcanc = *root;                    //Creo il nodo da cancellare pcanc e lo imposto al nodo corrente
            if ((*root)->getRight() == nullptr) {       //Se e' vuoto a destra...
                *root = (*root)->getLeft();             //Imposta albero a sinistra come nuovo nodo
            } else if ((*root)->getLeft() == nullptr) { //Se e' vuoto a sinistra...
                *root = (*root)->getRight();            //Imposta albero a destra come nuovo nodo
            } else {                                    //Se ha sottoalberi sia a destra che a sinistra...
                pred((*root)->getPointerLeft(), &pcanc);//Funzione predecessore
            }
            delete pcanc;                               //Dealloca pcanc
        }
    }
}
void BST::pred(TreeNode** root, TreeNode** pcanc) {
    if ((*root)->getRight() != nullptr) {               //Se a destra non e' vuoto
        pred((*root)->getPointerRight(), pcanc);        //Continua a cercare a partire da destra
    } else {                                            //Se trova vuoto a destra
        (*pcanc)->setInfo((*root)->getInfo());          //Imposta informazione di pcanc come quella del nodo corrente
        *pcanc = *root;                                 //Imposta pcanc a root
        *root = (*root)->getLeft();                     //sposta root a sinistra.
    }
}
/*MASSIMO e MINIMO*/
void BST::maxRecHelper() {
    maxRec(root);
}
void BST::minRecHelper() {
    minRec(root);
}
int BST::maxRec(TreeNode* root) {
    if (root->getRight() != nullptr) {
        return maxRec(root->getRight());
    }
    return root->getInfo();
}
int BST::minRec(TreeNode* root) {
    if (root->getLeft() != nullptr) {
        return minRec(root->getLeft());
    }
    return root->getInfo();
}
/*HELPER SYMMETRIC WALK*/
void BST::symmetricWalkHelper() {
    symmetricWalk(root);
}
void BST::symmetricWalk(TreeNode* root) {       
    if (root) {
        symmetricWalk(root->getLeft());
        cout << endl << root->getInfo();
        symmetricWalk(root->getRight());
    }
}
/*HELPER POST WALK*/
void BST::postWalkHelper() {
    postWalk(root);
}
void BST::postWalk(TreeNode* root) {
    if (root) {
        postWalk(root->getLeft());
        postWalk(root->getRight());
        cout << endl << root->getInfo();
    }
}
/*HELPER PRE WALK*/
void BST::preWalkHelper() {
    preWalk(root);
}
void BST::preWalk(TreeNode* root) {
    if (root) {
        cout << endl << root->getInfo();
        preWalk(root->getLeft());
        preWalk(root->getRight());
    }
}