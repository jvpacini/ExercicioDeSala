#ifndef FILA_H
#define FILA_H

#include <iostream>
#include <string>

using namespace std;
template <typename T>

class Fila {
private:
    int tamanho;
    int inicio;
    int fim;
    T* dados;

    static int numFilas;
    static int totalElementos;
public:
    Fila(int tam);
    
    ~Fila();
    
    void enfileirar(T valor);

    Fila<T>& operator+(const T& dado);
    
    T desenfileirar();

    int getTamanhoAtual() const;

    int getTamanhoMax() const;

    int getNumFilas() const;

    int getTotalElementos() const;

    void imprimir() const;

    bool operator==(const Fila<T> &outra) const;

    template<typename U>
    friend std::ostream &operator<<(std::ostream &out, const Fila<U> &f);

    template <typename U>
    friend std::istream &operator>>(std::istream& in, Fila<U> &fila);
};

#endif