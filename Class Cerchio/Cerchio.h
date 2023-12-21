#ifndef CERCHIO_H
#define CERCHIO_H

class Cerchio {
    private:
        float raggio;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Cerchio();
        Cerchio(float r);
        ~Cerchio();
        /*SETTER e GETTER*/
        void setRaggio(float r);

        float getRaggio();
        /*CALCOLO CIRCONFERENZA*/
        float calcCirconferenza();
        float calcArea();
        /*CREA CERCHIO CON RAGGIO DOPPIO*/
        void creaCerchio(Cerchio c);
        /*CONFRONTO CERCHI*/
        friend void congruenti(Cerchio c1, Cerchio c2);
};

#endif