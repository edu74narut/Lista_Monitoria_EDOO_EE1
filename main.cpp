#include "retangulo.h"
#include "circulo.h"
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


    return 0;
}