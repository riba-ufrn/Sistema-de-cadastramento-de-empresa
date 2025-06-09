#ifndef GERENTE_H
#define GERENTE_H

#include <iostream>
#include "funcionario.h"

class Gerente : public Funcionario {
private:
    float bonusMensal;

public:
    Gerente(int id, std::string nome, float salarioBase, float bonusMensal);
    virtual ~Gerente();

    void setBonusMensal(float bonusMensal);
    float getBonusMensal();

    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif
