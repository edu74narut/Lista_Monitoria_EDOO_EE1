#include "forma.h"

Forma::Forma(const std::string& nome){
    this->nome = nome;
}

Forma::~Forma(){};

std::string Forma::descricao() const{
    return "[" + nome + "] | Area: " + std::to_string(area()) + " | Perimetro: " + std::to_string(perimetro());
}