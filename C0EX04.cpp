// C02EX02.cpp // std declarado em cada linha

#include <iostream>


int main(void)
{
    char NOME[40], SOBRENOME[40];

    std::cout << "Informe seu nome: "; // operador de exma��o
    std::cin >> NOME; // << operador de inser��o
    std::cin.ignore (80, '\n'); // fun��o limpeza de caracteres depois do enter

    std::cout << "Informe seu sobrenome: "; // operador de exma��o
    std::cin >> SOBRENOME; // << operador de inser��o
    std::cin.ignore (80, '\n'); // fun��o limpeza de caracteres depois do enter

    std::cout << "Ola, " << NOME << " " << SOBRENOME;
    std::cout << std::endl; // :: operador de escopo

    std::cout << "Tecle <enter> para encerrar...";
    std::cin.get();
    return (0);
}
