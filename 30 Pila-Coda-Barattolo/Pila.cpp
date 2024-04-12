#include <iostream>
#include "Pila.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Pila::Pila() {
    top = nullptr;
}
Pila::Pila(Barattolo b) {
    top = new Nodo(b);
    if (!top) {
        cerr << "Allocazione fallita.";
    }
}
Pila::~Pila() {
    
}
/*GET TOP*/
Nodo* Pila::getTop() {

}
/*POP e PUSH*/
Nodo* Pila::pop() {

}
void Pila::push(Barattolo b) {

}
/*DISPLAY*/
void Pila::display() {

}