#include "circulo.h"

Circulo::Circulo(const std::string& nome, double raio) :
    Forma(nome),
    raio(raio)
    {
        if(raio < 0){
        throw std::invalid_argument("O raio não pode ser negativo!");
        }
    }

double Circulo::area() const{
    return 3.14*raio*raio;
}

double Circulo::perimetro() const{
    return 2*3.14*raio;
}

std::string Circulo::descricao() const{
    std::ostringstream oss;
    oss << "[" << nome << "] | Area: " << std::fixed << area()
        << " | Perimetro: " << perimetro();
}

Circulo Circulo::operator+(const Circulo& c2){
    double novoRaio = this->raio + c2.raio;
    
    if(novoRaio <= 0)
    {
        throw std::invalid_argument("Não tem circulos negativos");
    }

    return Circulo(this->nome + " + " + c2.nome, novoRaio);
}

Circulo Circulo::operator*(const double fator){
    if(fator <=0)
    {
        throw std::invalid_argument("O fator não pode ser negativo");
    }

    return Circulo(this->nome, raio*fator);
}

bool Circulo::operator==(const Circulo& c2){
    if(this->raio == c2.raio){
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& os, const Circulo& c2){
    os << c2.descricao();
    return os;
}