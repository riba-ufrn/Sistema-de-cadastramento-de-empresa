#include "gerente.h"
#include <iostream>
#include <string>

// Construtor
Gerente::Gerente(int id, std::string nome, float salarioBase, float bonusMensal) {
    this->setId(id);
    this->setNome(nome);
    this->setSalarioBase(salarioBase);
    this->bonusMensal = bonusMensal;
}

// Destrutor
Gerente::~Gerente() {}

// Implementações
void Gerente::setBonusMensal(float bonusMensal) {
    if (bonusMensal > 0) {
        this->bonusMensal = bonusMensal;
    }
}

float Gerente::getBonusMensal() {
    return this->bonusMensal;
}

float Gerente::calcularSalarioFinal() {
    return this->getSalarioBase() + this->bonusMensal;
}

void Gerente::exibirInformacoes() {
    std::cout << "ID: " << this->getId()
              << "\nNome: " << this->getNome()
              << "\nTipo: Gerente"
              << "\nSalário Base: " << this->getSalarioBase()
              << "\nBônus: " << this->getBonusMensal()
              << "\nSalário Final: " << this->calcularSalarioFinal()
              << "\n" << std::endl;
}
