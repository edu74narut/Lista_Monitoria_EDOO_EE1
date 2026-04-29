#ifndef PAR_H
#define PAR_H

template<typename T, typename U>

class Par{
    private:
        T primeiro;
        U segundo;
    public:
        Par(T primeiro, U segundo);
        T getPrimeiro() const;
        U getSegundo() const;
        void setPrimeiro(T valor);
        void setSegundo(U valor);
        Par<U,T> invertido() const;
        std::ostream& operator<<();
};

#endif