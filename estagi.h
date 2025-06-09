#ifndef ESTAGI_H
#define ESTAGI_H
//Extendendo funcionario
#include "funcionario.h"

class Estagiario : public Funcionario {
private:
     int horasTrabalhadas;
public:

    //Construtor + Getters e Setters;
    Estagiario(int id, std::string nome, float salarioBase, int horas);
    virtual ~Estagiario();
    int getHorasTrabalhadas();
    void exibirInformacoes();
    float calcularSalarioFinal();
};

    //Implementações



#endif