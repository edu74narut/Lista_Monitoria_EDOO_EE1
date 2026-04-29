#ifndef PAR_H
#define PAR_H
#include <ostream>

template<typename T, typename U>
class Par {
    private:
        T primeiro;
        U segundo;
public:
    Par(T primeiro, U segundo);
    T getPrimeiro() const;
    U getSegundo() const;
    Par<U, T> invertido() const;
    void setPrimeiro(T valor);
    void setSegundo(U valor);
    friend std::ostream& operator<<(std::ostream& os, const Par<T, U>& p2){
        return os << "(" << p2.getPrimeiro() << "," << p2.getSegundo() << " )";    
    }
};

// Ainda no arquivo .h, logo abaixo da classe:
template<typename T, typename U>
Par<T,U>::Par(T primeiro, U segundo) : primeiro(primeiro), segundo(segundo) {}

template<typename T, typename U>
T Par<T, U>::getPrimeiro() const {
    return primeiro;
}

template<typename T, typename U>
U Par<T, U>::getSegundo() const{
    return segundo;
}

template<typename T, typename U>
Par<U, T> Par<T,U>::invertido() const{
    return  Par<U,T>(segundo, primeiro);
}

template<typename T, typename U>
void Par<T,U>::setPrimeiro(T valor)
    {primeiro = valor;}

template<typename T, typename U>
void Par<T,U>::setSegundo(U valor)
    {segundo = valor;}

#endif