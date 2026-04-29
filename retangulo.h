#ifndef RETANGULO_H
#define RETANGULO_H
#include "forma.h"

class Retangulo : public Forma{
    private:
        double largura, altura;
    public:
        Retangulo(const std::string& nome, double largura, double altura);
        double area() const;
        double perimetro() const;
        bool quadrado() const;
        std::string descricao() const override;
        Retangulo operator+(const Retangulo& r2);
        Retangulo operator*(const double fator);
        bool operator==(const Retangulo& r2);
        bool operator<(const Retangulo& r2);
        bool operator>(const Retangulo& r2);
        friend std::ostream& operator<<(std::ostream& os, const Retangulo& r2);
};

#endif