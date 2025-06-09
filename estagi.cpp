#include "estagi.h"
#include <iostream>
#include <string>

// Construtor
Estagiario::Estagiario(int id, std::string nome, float salarioBase, int horasTrabalhadas) {
    this->setId(id);
    this->setNome(nome);
    this->setSalarioBase(salarioBase);

    this->horasTrabalhadas = horasTrabalhadas;
}

// Destrutor
Estagiario::~Estagiario() {}

// Implementações
int Estagiario::getHorasTrabalhadas() {
    return this->horasTrabalhadas;
}

float Estagiario::calcularSalarioFinal() {
    return this->getSalarioBase() * (this->horasTrabalhadas / 160.0f);
}

void Estagiario::exibirInformacoes() {
    std::cout << "ID: " << this->getId()
              << "\nNome: " << this->getNome()
              << "\nTipo: Estagiário"
              << "\nHoras Trabalhadas: " << this->getHorasTrabalhadas()
              << "\nSalário Base: " << this->getSalarioBase()
              << "\nSalário Final: " << this->calcularSalarioFinal()
              << "\n" << std::endl;
}
