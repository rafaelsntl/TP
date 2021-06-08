#include <iostream>
#include <locale>
#include <string>
#include <stdio.h>

using namespace std;

using namespace std;

#include "OrdenaNome.cpp"

int main()
{
    setlocale(LC_ALL, "");
    //Criando o vetor de 50 posições e uma variável auxiliar
    Nome pessoa[50], auxPessoa;

    //Para guardar os valores digitados pelo usuário.
    int quantidade;
    string nome;
    string cpf;

    //Explicando o programa, pedindo a quantidade de pessoas e o armazenando o valor.
    cout << "Este programa recebe o Nome e CPF de uma quantidade"
         " de pessoas e retorna com os nomes em ordem albabética." << endl;
    cout << "Quantas pessoas você deseja cadastrar:" << endl;
    cin >> quantidade;

    //Pedindo o nome e o cpf das pessoas
    cout << "Digite o nome e CPF de " <<
         quantidade << " pessoas:" << endl;

    //Para armazenar os valores digitados
    for(int i=0; i<quantidade; i++)
    {
        cin >> nome >> cpf;
        pessoa[i].setNome(nome);
        pessoa[i].setCPF(cpf);
    }

    cout << "Dados do vetor:"<< endl;
    //Chamando o método que imprime os dados antes de ordenar o vetor
    for(int k = 0; k < quantidade; k++)
        {
            cout << "Nome: " << pessoa[k].getNome()
                 << " CPF: " << pessoa[k].getCPF() << endl;
        }
    //Chamando o método para ordenar
    auxPessoa.OrdenaDados(pessoa, quantidade);

    cout <<"Dados do vetor ordenados por nome:" << endl;
    //Chamando o método que imprime os dados após ter ordenado o vetor
    for(int k = 0; k < quantidade; k++)
        {
            cout << "Nome: " << pessoa[k].getNome()
                 << " CPF: " << pessoa[k].getCPF() << endl;
        }
    return 0;
}
