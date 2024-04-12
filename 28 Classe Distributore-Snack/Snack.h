#ifndef SNACK_H
#define SNACK_H

#include <iostream>

using namespace std;

class Snack {
    private:
        string name;
        int code;
    public:
        /*COSTRUTTORE DI DEFAULT*/
        Snack();
        /*SETTER E GETTER*/
        void setName(string n);
        void setCode(int c);
        void set(string n, int c);

        string getName();
        int getCode();
        /*OPERATOR =*/
        Snack operator=(Snack s);
        Snack operator=(int val);
        /*OVERLOADING i/o*/
        friend ostream& operator<<(ostream& out, Snack& s);
        friend istream& operator>>(istream& in, Snack& s);
};

#endif // SNACK_H
