#ifndef DEV_H
#define DEV_H

#include <iostream>
#include "funcionario.h" // Herança da classe Funcionario

class Desenvolvedor : public Funcionario {
private:
    int quantidadeProjetos;

public:
    Desenvolvedor(int id, std::string nome, float salarioBase, int quantidadeProjetos);
    virtual ~Desenvolvedor();

    int getQuantidadeProjetos();
    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif
