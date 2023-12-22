#include <iostream>
#include "Data.h"

using namespace std;

/*COSTRUTTORE e DISTRUTTORE*/
Data::Data() {
    anno = 1582;
    mese = 10;
    giorno = 15;
}
Data::Data(int a, int m, int g) {
    anno = a;
    mese = m;
    giorno = g;
}
Data::~Data() {

}

/*SETTER e GETTER*/
void Data::setAnno(int a) {
    anno = a;
}
void Data::setMese(int m) {
    mese = m;
}
void Data::setGiorno(int g) {
    giorno = g;
}
void Data::setAll(int a, int m, int g) {
    anno = a;
    mese = m;
    giorno = g;
}

int Data::getAnno() {
    return anno;
}
int Data::getMese() {
    return mese;
}
int Data::getGiorno() {
    return giorno;
}
/*STAMPA (gg/mm/aaaa)*/
void Data::print() {
    cout << giorno << "/" << mese << "/" << anno;
}
/*LEGGI*/
void Data::read() {
    do {
        cout << "Anno: ";
        cin >> anno;
        cout << "Mese: ";
        cin >> mese;
        cout << "Giorno: ";
        cin >> giorno;
    } while (validaData() != 1);
}
/*VALIDA DATA*/
bool Data::bisestile(int anno) {
    bool flag = false;
    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        flag = true;
    }

    return flag;
}
int Data::validaData() {
    int flag = 0;
    if (anno < 1 || mese < 1 || mese > 12 || giorno < 1) {
        flag = 0;
    }

    switch (mese) {
        case 4:
        case 6:
        case 9:
        case 11:
            if (giorno <= 30) {
                flag = 1;
            }
            break;
        case 2:
            if (bisestile(anno)) {
                if (giorno <= 29) {
                    flag = 1;
                }
            } else {
                if (giorno <= 28) {
                    flag = 1;
                }
            }
            break;
        default:
            if (giorno <= 30) {
                flag = 1;
            }
    }

    if (anno < 1582 || (anno == 1582 && mese < 10) || (anno == 1582 && mese == 10 && giorno < 15)) {
        flag = 0;
    }
    /*
    int flag = 1; /*1 = accettabile, 0 = non accettabile*/
    /*
    if (anno < 1582) {
        flag = 0;
    }

    if (anno == 1582 && (mese < 10 || giorno < 15)) {
        flag = 0;
    }

    if (giorno < 1 && giorno > 31) {
        flag = 0;
    }

    if (mese > 12 || mese < 1) {
        flag = 0;
    }
    */
    return flag;
}
/*CONFRONTO DATE*/
int confronta(Data d1, Data d2) {
    int flag = 0; /*0 = uguali, 1 = la prima e' antecedente, 2 = la seconda e' antecedente*/

    if (d1.getAnno() < d2.getAnno()) {
        flag = 1;
        if (d1.getMese() < d2.getMese()) {
            flag = 1;
            if (d1.getGiorno() < d2.getGiorno()) {
                flag = 1;
            }
        }
    } else {
        flag = 2;
        if (d1.getMese() > d2.getMese()) {
            flag = 2;
            if (d1.getGiorno() > d2.getGiorno()) {
                flag = 2;
            }
        }
    }

    if (d1.getAnno() == d2.getAnno()) {
        flag = 0;
    }

    return flag;
}