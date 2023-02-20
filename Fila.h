#ifndef FILA_H
#define FILA_H

#include <iostream>
#include <string>

using namespace std;

class Fila {
private:
    int tamanho;
    int inicio;
    int fim;
    string* dados;

    static int numFilas;
    static int totalElementos;
public:
    Fila(int tam);
    
    ~Fila();
    
    void enfileirar(string valor);
    
    string desenfileirar();

    int getTamanhoAtual();

    int getTamanhoMax();

    int getNumFilas();

    int getTotalElementos();
};

#endif