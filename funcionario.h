#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

class Funcionario {
protected:
    std::string nome;
    float salarioBase;

private:
    int id;

public:
    // Construtor e destrutor virtual
    Funcionario();
    virtual ~Funcionario();

    // Métodos getters e setters
    void setNome(std::string nome_funcionario);
    void setId(int index);
    void setSalarioBase(float salario);
    float getSalarioBase();
    std::string getNome();
    int getId();
    
    //Virtuais
    virtual void exibirInformacoes();
    virtual float calcularSalarioFinal() = 0; //Virtual puro
};

   

#endif