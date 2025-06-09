#include "dev.h"

// Construtor
Desenvolvedor::Desenvolvedor(int id, std::string nome, float salarioBase, int quantidadeProjetos) {
    // Inicializa os atributos da classe base
    this->setId(id);
    this->setNome(nome);
    this->setSalarioBase(salarioBase);

    // Inicializa o atributo da própria classe
    this->quantidadeProjetos = quantidadeProjetos;
}

// Destrutor
Desenvolvedor::~Desenvolvedor() {}

// Implementações
int Desenvolvedor::getQuantidadeProjetos() {
    return this->quantidadeProjetos;
}

// Métodos virtuais
float Desenvolvedor::calcularSalarioFinal() {
    return this->getSalarioBase() + (500 * this->quantidadeProjetos);
}

void Desenvolvedor::exibirInformacoes() {
    std::cout << "ID: " << this->getId()
              << "\nNome: " << this->getNome()
              << "\nTipo: Desenvolvedor"
              << "\nProjetos: " << this->getQuantidadeProjetos()
              << "\nSalário Base: " << this->getSalarioBase()
              << "\nSalário Final: " << this->calcularSalarioFinal()
              << "\n" << std::endl;
}
