#include <iostream>
#include "Distributore.h"

/*COSTRUTTORI e DISTRUTTORE*/
Distributore::Distributore() {
    tipoCarburante = "undefined";
    prezzo = 0;
    litri = 0;
    capienza = 0;
}
Distributore::Distributore(string type, float price, float litres, float capacity) {
    tipoCarburante = type;
    prezzo = price;
    capienza = capacity;
    if (litres <= capienza && litres > 0) {
        litri = litres;
    } else {
        litres = 0;
    }
}
Distributore::~Distributore() {

}
/*SETTER e GETTER*/
void Distributore::setTipo(string type) {
    tipoCarburante = type;
}
void Distributore::setPrezzo(float price) {
    prezzo = price;
}
void Distributore::setLitri(float litres) {
    if (litres <= capienza && litres > 0) {
        litri = litres;
    } else {
        litres = 0;
    }
}
void Distributore::setCapienza(float capacity) {
    capienza = capacity;
}

string Distributore::getTipo() {
    return tipoCarburante;
}
float Distributore::getPrezzo() {
    return prezzo;
}
float Distributore::getLitri() {
    return litri;
}
float Distributore::getCapienza() {
    return capienza;
}
/*PRINT*/
void Distributore::print() {
    cout << "Tipo carburante: " << tipoCarburante << endl;
    cout << "Prezzo: " << prezzo << " euro" << endl;
    cout << "Litri contenuti: " << litri << endl;
    cout << "Capienza distributori: " << capienza;
}
/*READ*/
void Distributore::read() {
    cout << "Tipo di carburante: ";
    cin >> tipoCarburante;

    do {
        cout << "Prezzo al litro: ";
        cin >> prezzo;
    } while (prezzo <= 0.0);

    do {
        cout << "Capienza massima: ";
        cin >> capienza;
    } while (capienza <= 0.0);

    do {
        cout << "Litri contenuti nel distributore: ";
        cin >> litri;
    } while (litri < 0.0 && litri > capienza);
}
/*OVERLOADING OPERATORI*/
Distributore Distributore::operator-(float euro) {
    float litriSottratti = (euro / prezzo);

    if (litri - litriSottratti >= 0.0) {
        litri -= litriSottratti;
        cout << "Sono stati sottratti " << litriSottratti << " litri per " << euro << " euro." << endl;
    } else {
        litri = 0;
        cout << "Carburante insufficiente. Le verranno rimborsati " << abs((litri - litriSottratti) * prezzo) << " euro." << endl;
    }

    return *this;
}