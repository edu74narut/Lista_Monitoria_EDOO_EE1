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
    
    return 0;
}