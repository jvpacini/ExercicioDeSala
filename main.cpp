#include "Fila.h"
#include "Fila.cpp"

int main(){

    Fila<string> f1(2);
    Fila<string> f2(3);
    Fila<string> f3(0);
    Fila<string> f4(4);

    f1.enfileirar("um");
    f1.enfileirar("dois");

    f2.enfileirar("primeiro");

    std::cout << "Primeiro elemento de f2: " << f2.desenfileirar() << std::endl;

    f3.enfileirar("tamanho excedido");

    f4.enfileirar("Teste");

    std::cout << "Informacoes sobre a fila 1, quantidade de elementos: " << f1.getTamanhoAtual()
    <<" capacidade da fila: " << f1.getTamanhoMax() << std::endl;

    std::cout << "Informacoes sobre a fila 2, quantidade de elementos: " << f2.getTamanhoAtual()
    <<" capacidade da fila: " << f2.getTamanhoMax() << std::endl;

    std::cout << "Informacoes sobre a fila 3, quantidade de elementos: " << f3.getTamanhoAtual()
    <<" capacidade da fila: " << f3.getTamanhoMax() << std::endl;

    std::cout << "Informacoes sobre a fila 4, quantidade de elementos: " << f4.getTamanhoAtual()
    <<" capacidade da fila: " << f4.getTamanhoMax() << std::endl;

    std::cout << "Deletando fila 4" << std::endl;

    f4.~Fila(); //O destrutor está sendo chamado explicitamente somente para testar a contagem total de filas

    std::cout << "Numero total de filas: " << f1.getNumFilas() << " numero total de elementos em todas as filas: "
    << f1.getTotalElementos() << std::endl;

    std::cout << "Testando fila de inteiros" << std::endl;

    Fila<double> f5(5);

    for (int i = 1; i<=5; i++){
        f5.enfileirar(i);
    }

    std::cout << "Criada fila 5 de inteiros, com " << f5.getTamanhoAtual() << " elementos e tamanho: " << f5.getTamanhoMax()
    << " contendo os elementos: " << std::endl;

    for (int i = 1; i<=5; i++){
        std::cout << f5.desenfileirar() << std::endl;
    }
    return 0;
}