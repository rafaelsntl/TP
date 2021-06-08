#include <iostream>
#include <locale>

using namespace std;

#include "OrdenaNome.cpp"

int main()
{
    setlocale(LC_ALL, "");

    cout << "Este recebe uma lista de nomes "
        "e coloca em ordem alfabetica" << endl;

    // variáveis para guardar informações que o usuário digitar
    int tMax, i;
    string ListaDeNomes;

    cout << "Digite o tamanho maximo da lista de nomes:" << endl;
    cin >> tMax;
    // definindo o objeto da classe e passando o tamanho max da lista
    Nomes nomes(tMax);


    //Pedindo os nomes, armazenando e passando para a classe
    cout << "Insira os nomes:" << endl;
    for(i=0; i<5; i++)
    {
        cin >> ListaDeNomes;
        nomes.adicionaNomes(ListaDeNomes);
    }

    //Métodos para imprimir a lista e ordenar
    cout  << "Lista inserida:" << endl;
    nomes.imprime();
    nomes.ordenaNomes();

    cout  << "Lista Ordenada:" << endl;
    nomes.imprime();

    //Pedindo o nome que será adicionado
    cout << "Insira um nome: ";
    // inserindo um nome no vetor
    cin >> ListaDeNomes;
    nomes.adicionaNomes(ListaDeNomes);

    //Chamando novamente os métodos para ordenar e imprimir a nova lista
    nomes.ordenaNomes();
    cout << "Lista Ordenada:" << endl;
    nomes.imprime();

    cout << "Memoria Liberada."<< endl;

    return 0;
}
