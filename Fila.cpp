#include "Fila.h"

int Fila::numFilas = 0;
int Fila::totalElementos = 0;

Fila::Fila(int tam){
        if (tam <= 0) {
        throw std::invalid_argument("Tamanho da fila deve ser positivo!");
        }
        tamanho = tam;
        inicio = 0;
        fim = 0;
        dados = new string[tamanho];
        numFilas++;
    }

Fila::~Fila() {
        delete[] dados;
        numFilas--;
    }

void Fila::enfileirar(string valor) {
        if (fim == tamanho) {
            std::cout << "Fila cheia!" << std::endl;
            return;
        }
        dados[fim] = valor;
        fim++;
        totalElementos++;
    }

string Fila::desenfileirar() {
        if (inicio == fim) {
            std::cout << "Fila vazia!" << std::endl;
            return "";
        }
        string valor = dados[inicio];
        inicio++;
        totalElementos--;
        return valor;
    };

int Fila::getTamanhoAtual() {
        return fim - inicio;
    };

int Fila::getTamanhoMax() {
    return tamanho;
    };

int Fila::getNumFilas() {
    return numFilas;
    };

int Fila::getTotalElementos() {
    return totalElementos;
};