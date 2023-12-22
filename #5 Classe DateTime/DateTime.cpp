#include <iostream>
#include "DateTime.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORI*/
DateTime::DateTime() {
    ore = 0;
    minuti = 0;
    secondi = 0;
}
DateTime::DateTime(int hours, int minutes, int seconds, Data d) {
    if (hours < 0 || hours > 23) {
        ore = 0;
    } else {
        ore = hours;
    }

    if (minutes < 0 || minutes > 59) {
        minuti = 0;
    } else {
        minuti = minutes;
    }

    if (seconds < 0 || seconds > 59) {
        secondi = 0;
    } else {
        secondi = seconds;
    }

    date.setAll(d.getAnno(), d.getMese(), d.getGiorno());
}
DateTime::~DateTime() {

}
/*SETTER e GETTER*/
void DateTime::setOre(int hours) {
    if (hours < 0 || hours > 23) {
        ore = 0;
    } else {
        ore = hours;
    }
}
void DateTime::setMinuti(int minutes) {
    if (minutes < 0 || minutes > 59) {
        minuti = 0;
    } else {
        minuti = minutes;
    }
}
void DateTime::setSecondi(int seconds) {
    if (seconds < 0 || seconds > 59) {
        secondi = 0;
    } else {
        secondi = seconds;
    }
}
void DateTime::setAll(int hours, int minutes, int seconds, Data d) {
    if (hours < 0 || hours > 23) {
        ore = 0;
    } else {
        ore = hours;
    }

    if (minutes < 0 || minutes > 59) {
        minuti = 0;
    } else {
        minuti = minutes;
    }

    if (seconds < 0 || seconds > 59) {
        secondi = 0;
    } else {
        secondi = seconds;
    }

    date.setAll(d.getAnno(), d.getMese(), d.getGiorno());
}

int DateTime::getOre() {
    return ore;
}
int DateTime::getMinuti() {
    return minuti;
}
int DateTime::getSecondi() {
    return secondi;
}
/*PRINT*/
void DateTime::print() {
    cout << date.getGiorno() << "/" << date.getMese() << "/" << date.getAnno() << " | " << ore << "/" << minuti << "/" << secondi;
}
/*READ*/
void DateTime::read() {
    do {
        cout << "Ore: ";
        cin >> ore;
    } while (ore < 0 || ore > 23);

    do {
        cout << "Minuti: ";
        cin >> minuti;
    } while (minuti < 0 || minuti > 59);

    do {
        cout << "Secondi: ";
        cin >> secondi;
    } while (secondi < 0 || secondi > 59);

    date.read();
}
/*VALIDA V2*/
bool DateTime::validaDateTime() {
    return date.validaData();
}
/*COMPARA DATA*/
void DateTime::compare(DateTime dt2) {
    bool flag = false;

    //Controllo ore - minuti - secondi
    if (ore == dt2.ore && minuti == dt2.minuti && secondi == dt2.secondi) {
        flag = true;
    } else {
        flag = false;
    }

    //Controllo anno - mese - giorno
    if (date.getAnno() == dt2.date.getAnno() && date.getMese() == dt2.date.getMese() && date.getGiorno() == dt2.date.getGiorno()) {
        flag = true;
    } else {
        flag = false;
    }

    if (flag == true) {
        cout << "DATE UGUALI" << endl;
    } else {
        cout << "DATE DIVERSE" << endl;
    }
}
/*FORMATO ANGLOSASSONE*/
void formatoAnglosassone(DateTime dt) {
    cout << dt.date.getGiorno() << "/" << dt.date.getMese() << "/" << dt.date.getAnno() << " | " << dt.getOre() << "/" << dt.getMinuti() << "/" << dt.getSecondi();
}