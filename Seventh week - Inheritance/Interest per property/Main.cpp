#include <iostream>//Biblioteca de entrada e sa�da de dados
#include <locale>//Biblioteca de manipula��o de caracteres especiais
#include <iomanip>//Biblioteca para utilizar o setprecision.
#include <cstdlib>//Biblioteca para utilizar o system.

using namespace std;

//Incluindo os arquivos das classes.
#include "imovel.cpp"
#include "novo.cpp"
#include "velho.cpp"

int main()
{
    setlocale(LC_ALL, "");//Para caracteres especiais
    int tipo; //Declarando as vari�veis
    float percentual;
    string rua, endereco;

    //Explicando o programa e pedindo o tipo da opera��o
    cout << "O Programa calcula o valor de um im�vel." << endl << endl;
    cout << "Insira o tipo de im�vel:"<< endl
    << "1- Novo" << endl << "2- Usado" << endl
    << "Para sair, digite qualquer outro valor" << endl;
    cin >> tipo;

    system("cls");

    if(tipo==1){
        cout << "Percentual " << endl;
        cin >> percentual;
        cout << "Endere�o: " << endl;
        cin >> endereco;
        system("cls");

        //Instancializando o objeto e inicializando o consrutor.
        Novo imovel(endereco, 100000.00);
        //Setando o valor percentual digitado pelo usu�rio
        imovel.setPorcentagemAdicional(percentual);
        //Imprimindo os valores ap�s realizar as opera��es
        imovel.imprime();
    }

    else if(tipo==2){
        cout << "Percentual " << endl;
        cin >> percentual;
        cout << "Endere�o: "<< endl;
        cin >> endereco;
        system("cls");

        Velho imovel(endereco,100000.00);//
        imovel.setPorcentacemDesconto(percentual);
        imovel.imprime();
    }

    else //Se o valor digitado n�o for 1 ou 2
        cout << "Entrada inv�lida" << endl;

    return 0;
}
