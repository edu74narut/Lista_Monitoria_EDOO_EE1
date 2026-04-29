#include "retangulo.h"
#include "circulo.h"
#include "par.h"
#include <vector>
#include <iostream>

int main(){
    std::vector<Forma*> formas;
    formas.push_back(new Retangulo("R", 4,3));
    formas.push_back(new Retangulo("R", 4, 3));
    formas.push_back(new Circulo("C", 2));

    for (auto f : formas)
        std ::cout << f->descricao() << std ::endl;

    for (auto f: formas)
        delete f;
    formas.clear();

    std::cout << "Operadores" << std::endl;

    Retangulo r1("R1", 2, 3);
    Retangulo r2("R2", 1, 1);
    r1 *= 2.5;
    std ::cout << r1 << std ::endl;
    std ::cout << (r1 + r2) << std ::endl;
    std ::cout << (r1 * 2) << std ::endl;

    std::cout <<"Templates"<< std::endl;
    // Par<Retangulo, Circulo>
    Retangulo r3("R3", 3, 4);
    Circulo c1("C1", 5);
    Par<Retangulo, Circulo> p1(r1, c1);
    std::cout << p1 << std ::endl;
    // invertido() gera Par<Circulo, Retangulo> 
    Par<Circulo, Retangulo> p2 = p1.invertido();
    std::cout << p2 << std ::endl;

    std::cout << "Excecao" <<std::endl;
    Retangulo r4("R4", 1, 1);
    r2 *= -1;
    Circulo c2("C2", -5);


    return 0;
}