#include <iostream>
#include <locale>

using namespace std;

#include "OrdenaNome.cpp"

int main()
{
    setlocale(LC_ALL, "");

    cout << "Este recebe uma lista de nomes "
        "e coloca em ordem alfabetica" << endl;

    // vari�veis para guardar informa��es que o usu�rio digitar
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

    //M�todos para imprimir a lista e ordenar
    cout  << "Lista inserida:" << endl;
    nomes.imprime();
    nomes.ordenaNomes();

    cout  << "Lista Ordenada:" << endl;
    nomes.imprime();

    //Pedindo o nome que ser� adicionado
    cout << "Insira um nome: ";
    // inserindo um nome no vetor
    cin >> ListaDeNomes;
    nomes.adicionaNomes(ListaDeNomes);

    //Chamando novamente os m�todos para ordenar e imprimir a nova lista
    nomes.ordenaNomes();
    cout << "Lista Ordenada:" << endl;
    nomes.imprime();

    cout << "Memoria Liberada."<< endl;

    return 0;
}
