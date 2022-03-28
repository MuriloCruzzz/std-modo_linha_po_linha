// C02EX02.cpp // std declarado em cada linha

#include <iostream>


int main(void)
{
    char NOME[40], SOBRENOME[40];

    std::cout << "Informe seu nome: "; // operador de exmação
    std::cin >> NOME; // << operador de inserção
    std::cin.ignore (80, '\n'); // função limpeza de caracteres depois do enter

    std::cout << "Informe seu sobrenome: "; // operador de exmação
    std::cin >> SOBRENOME; // << operador de inserção
    std::cin.ignore (80, '\n'); // função limpeza de caracteres depois do enter

    std::cout << "Ola, " << NOME << " " << SOBRENOME;
    std::cout << std::endl; // :: operador de escopo

    std::cout << "Tecle <enter> para encerrar...";
    std::cin.get();
    return (0);
}
