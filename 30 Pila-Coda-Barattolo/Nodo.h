#ifndef NODO_H
#define NODO_H

class Nodo {
    private:
        int dato;
        Nodo* nextPtr;
    public:
        /*COSTRUTTORI*/
        Nodo();
        Nodo(int data);
        Nodo(int data, Nodo* next);
        /*SETTER e GETTER*/
        int getDato();
        Nodo* getNextPtr();

        void setDato(int data); 
        void setNextPtr(Nodo* next);      
};

#endif