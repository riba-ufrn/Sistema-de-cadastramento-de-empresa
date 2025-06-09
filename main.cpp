#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

#include "funcionario.h"
#include "dev.h"
#include "gerente.h"
#include "estagi.h"

int main() {
    vector<Funcionario*> funcionarios;
    const int numFuncionariosParaCadastrar = 6;

    cout << "Sistema de Cadastro de Funcionários\n" << endl;
    cout << "Você precisa cadastrar pelo menos " << numFuncionariosParaCadastrar << " funcionários.\n" << endl;

    for (int i = 0; i < numFuncionariosParaCadastrar; ++i) {
        cout << "Cadastro do Funcionário " << i + 1 << endl;

        int tipo = 0;
        cout << "Digite o tipo (1: Desenvolvedor, 2: Gerente, 3: Estagiário): ";
        cin >> tipo;

        if (tipo < 1 || tipo > 3) {
            cout << "Tipo inválido. Digite um número entre 1 e 3.\n" << endl;
            --i;
            continue;
        }

        // Dados comuns
        int id;
        string nome;
        float salarioBase;

        cout << "ID do funcionário: ";
        cin >> id;

        cout << "Nome do funcionário: ";
        cin.ignore();
        getline(cin, nome);

        cout << "Salário base: ";
        cin >> salarioBase;

        // Dados específicos por tipo
        switch (tipo) {
            case 1: {
                int projetos;
                cout << "Quantidade de projetos: ";
                cin >> projetos;
                funcionarios.push_back(new Desenvolvedor(id, nome, salarioBase, projetos));
                break;
            }
            case 2: {
                float bonus;
                cout << "Valor do bônus mensal: ";
                cin >> bonus;
                funcionarios.push_back(new Gerente(id, nome, salarioBase, bonus));
                break;
            }
            case 3: {
                int horas;
                cout << "Horas trabalhadas no mês: ";
                cin >> horas;
                funcionarios.push_back(new Estagiario(id, nome, salarioBase, horas));
                break;
            }
        }

        cout << "Funcionário cadastrado com sucesso!\n" << endl;
    }

    cout << "\n--- Informações dos Funcionários Cadastrados ---\n" << endl;
    for (const auto& funcPtr : funcionarios) {
        funcPtr->exibirInformacoes();
    }

    // Liberação de memória
    for (auto& funcPtr : funcionarios) {
        delete funcPtr;
    }

    return 0;
}
