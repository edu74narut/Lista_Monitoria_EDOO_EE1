#ifndef CIRCULO_H
#define CIRCULO_H
#include "forma.h"

class Circulo: public Forma{
    private:
        double raio;
    public:
        Circulo(const std::string& nome, double raio);
        double area() const;
        double perimetro() const;
        std::string descricao() const override;
        Circulo operator+(const Circulo& c2);
        Circulo operator*(const double fator);
        Circulo operator*=(const double fator);
        bool operator==(const Circulo& c2);
        friend std::ostream& operator<<(std::ostream& os, const Circulo& c2);

};

#endif