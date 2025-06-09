#include "funcionario.h"
#include <iostream>
#include <string>

// Construtor
Funcionario::Funcionario() {}

// Destrutor virtual
Funcionario::~Funcionario() {}

// Implementações dos métodos
void Funcionario::setSalarioBase(float salario) {
    if (salario < 0) return;
    this->salarioBase = salario;
}

void Funcionario::setId(int id) {
    this->id = id;
}

void Funcionario::setNome(std::string nomeFuncionario) {
    this->nome = nomeFuncionario;
}

std::string Funcionario::getNome() {
    return this->nome;
}

int Funcionario::getId() {
    return this->id;
}

float Funcionario::getSalarioBase() {
    return this->salarioBase;
}

// Método virtual vazio
void Funcionario::exibirInformacoes() {}
