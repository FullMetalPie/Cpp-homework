#include <iostream>
#include "Deposito.h"

using namespace std;

int main() {
    Deposito d;
    string answer;
    int ans;

    do {
        do {
            system("CLS"); 
            cout << "1. Deposito;" << endl;
            cout << "2. Estrazione;" << endl;
            cout << "3. Ricerca merce infiammabile;" << endl;
            cout << "4. Peso totale;" << endl;
            cout << "5. Stampa;" << endl;
            cout << "6. Ucita." << endl;
            cout << endl << "OPERAZIONE: ";
            cin >> ans;
        } while (ans < 1 || ans > 6);

        switch (ans) {
            case 1:
                do {
                    cout << "Vuoi depositare un altro container? (y/n)\n";
                    cin >> answer;

                    if (answer == "y" && d.countNodes() < 999) {
                        Container c;
                        cin >> c;
                        d.push(c);
                        cout << "[Aggiunto elemento]" << endl << endl;
                    }

                    if (d.countNodes() >= 999) {
                        cout << "[PIENO]" << endl << endl;
                    }
                } while (answer != "n");
                while(getchar() != '\n');
                break;
            case 2:
                cout << d;
                cout << "\n(premi 'INVIO' per continuare)";
                while(getchar() != '\n');
                while(getchar() != '\n');
                break;
            case 3:
                /*NON CAPITO*/
                if (true) {
                    Deposito temp;
                    if (!d.isEmpty()) {
                        while (d.getHead()->getInfo().getType() != "infiammabile" && !d.isEmpty()) {
                            temp.push(d.getHead()->getInfo());
                            d.pop();
                        }

                        if(d.isEmpty()) {
                            cout << "Elemento non troavato!";
                        } else {
                            Container infiammabile = d.getHead()->getInfo();
                            cout << infiammabile;
                        }
                        while (!temp.isEmpty()) {
                            d.push(temp.getHead()->getInfo());
                            temp.pop();
                        }
                    } else {
                        cout << "Pila vuota";
                    }
                }
                break;
            case 4:
                /*NON FATTO*/
                break;
            case 5:
                cout << "Numero di elementi: " << d.countNodes() << " \n(premi 'INVIO' per continuare)";
                while(getchar() != '\n');
                while(getchar() != '\n');
                break;
        }
    } while(ans != 6);

    return 0;
}
