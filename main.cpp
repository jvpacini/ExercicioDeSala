#include "Fila.h"
#include "Fila.cpp"

int main(){

    Fila f1(2);
    Fila f2(3);
    Fila f3(0);
    Fila f4(4);

    f1.enfileirar("um");
    f1.enfileirar("dois");
    f1.enfileirar("tamanho excedido");

    f2.enfileirar("primeiro");

    std::cout << "Primeiro elemento de f2: " << f2.desenfileirar() << std::endl;

    f2.desenfileirar();

    f3.enfileirar("tamanho excedido");

    f4.enfileirar("Teste da verificacao para valores negativos");

    std::cout << "Informacoes sobre a fila 1, quantidade de elementos: " << f1.getTamanhoAtual()
    <<" capacidade da fila: " << f1.getTamanhoMax() << std::endl;

    std::cout << "Informacoes sobre a fila 1, quantidade de elementos: " << f2.getTamanhoAtual()
    <<" capacidade da fila: " << f2.getTamanhoMax() << std::endl;

    std::cout << "Informacoes sobre a fila 1, quantidade de elementos: " << f3.getTamanhoAtual()
    <<" capacidade da fila: " << f3.getTamanhoMax() << std::endl;

    std::cout << "Informacoes sobre a fila 1, quantidade de elementos: " << f4.getTamanhoAtual()
    <<" capacidade da fila: " << f4.getTamanhoMax() << std::endl;

    std::cout << "Numero total de filas: " << f1.getNumFilas() << " numero total de elementos em todas as filas: "
    << f1.getTotalElementos() << std::endl;

    return 0;
}