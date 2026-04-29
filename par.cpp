#include "par.h"

template<typename T, typename U>
Par<T, U>::Par(T primeiro, U segundo): primeiro(primeiro), segundo(segundo)
{}

template<typename T, typename U>
T Par<T, U>::getPrimeiro() const {
    return primeiro;
}