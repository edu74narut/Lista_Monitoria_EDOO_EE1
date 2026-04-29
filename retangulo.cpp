#include "retangulo.h"

Retangulo::Retangulo(const std::string& nome, double largura, double altura):
    Forma(nome),
    largura(largura), 
    altura(altura) 
    {
        if(largura < 0 || altura < 0){
            throw std::invalid_argument("A largura ou altura não podem ser negativos!");
        }
    }

double Retangulo::area() const{
    return largura*altura;
}

double Retangulo::perimetro() const{
    return 2*(largura+altura);
}

bool Retangulo::quadrado() const{
    return largura == altura;
}

std::string Retangulo::descricao() const {
    std::ostringstream oss;
    // fixed + setprecision(2) garante o formato X.XX
    oss << "[" << this->nome << "] | Area: " << std::fixed << area() 
        << " | Perimetro: " << perimetro();
    
    return oss.str();
}

Retangulo Retangulo::operator+(const Retangulo& r2){
    double novaAltura = this->altura + r2.altura;
    double novaLargura = this->largura +r2.largura;
    
    if (novaAltura <= 0 || novaLargura <= 0){
        throw std::invalid_argument("Não tem retângulos negativos");
    }

    return Retangulo(this->nome + " + " + r2.nome, novaLargura, novaAltura);
}

Retangulo Retangulo::operator*(const double fator){
    if (fator <= 0)
    {
        throw std::invalid_argument("Não pode multiplicar por fator negativo!");
    }

    return Retangulo(this->nome, largura*fator, altura*fator);
}

Retangulo Retangulo::operator*=(const double fator){
    if (fator <= 0)
    {
        throw std::invalid_argument("Não pode multiplicar por fator negativo!");
    }

    return Retangulo(this->nome, largura*=fator, altura*=fator);
}

bool Retangulo::operator==(const Retangulo& r2){
    if(largura == r2.largura && altura == r2.altura){
        return true;
    }
    return false;
}

bool Retangulo::operator<(const Retangulo& r2){
    if(this->area() < r2.area())
        return true;
    return false;
}

bool Retangulo::operator>(const Retangulo& r2){
    if(this->area() > r2.area())
        return true;
    return false;
}

std::ostream& operator<<(std::ostream& os, const Retangulo& r2)
{
    os << r2.descricao();
    return os;
}