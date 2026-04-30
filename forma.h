#ifndef FORMA_H
#define FORMA_H
#include <string>
#include <sstream>
#include <iostream>

class Forma{
    protected:
        std::string nome;
    public:
        Forma(const std::string& nome);
        virtual ~Forma() = 0;
        virtual double area() const = 0;
        virtual double perimetro() const = 0;   
        virtual std::string descricao() const;
};

#endif