#include "Fila.h"

template <typename T>

Fila<T>::Fila(int tam){
    if (tam < 0){
        throw std::invalid_argument("Tamanho da fila deve ser positivo!");
    }
    tamanho = tam;
    inicio = 0;
    fim = 0;
    dados = new T[tamanho];
    numFilas++;
}

template <typename T>

Fila<T>::~Fila(){
    delete[] dados;
    numFilas--;
    totalElementos -= getTamanhoAtual();
}

template <typename T>

void Fila<T>::enfileirar(T valor){
    if (fim == tamanho){
        std::cout << "Fila cheia!" << std::endl;
        return;
    }
    dados[fim] = valor;
    fim++;
    totalElementos++;
}

template <typename T>

T Fila<T>::desenfileirar(){
    if (inicio == fim){
        std::cout << "Fila vazia!" << std::endl;
        return T();
    }
    T valor = dados[inicio];
    inicio++;
    totalElementos--;
    return valor;
};

template <typename T>

int Fila<T>::getTamanhoAtual() const{
    return fim - inicio;
};

template <typename T>

int Fila<T>::getTamanhoMax() const{
    return tamanho;
};

template <typename T>

int Fila<T>::getNumFilas() const{
    return numFilas;
};

template <typename T>

int Fila<T>::getTotalElementos() const{
    return totalElementos;
};

template <typename T>

void Fila<T>::imprimir() const{
    std::cout << "Elementos da fila: ";
    for (int i = inicio; i < fim; i++){
        std::cout << dados[i] << " ";
    }
    std::cout << std::endl;
}


template <typename T>
int Fila<T>::numFilas = 0;

template <typename T>
int Fila<T>::totalElementos = 0;
