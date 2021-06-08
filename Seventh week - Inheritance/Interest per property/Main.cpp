#include <iostream>//Biblioteca de entrada e saída de dados
#include <locale>//Biblioteca de manipulação de caracteres especiais
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
    int tipo; //Declarando as variáveis
    float percentual;
    string rua, endereco;

    //Explicando o programa e pedindo o tipo da operação
    cout << "O Programa calcula o valor de um imóvel." << endl << endl;
    cout << "Insira o tipo de imóvel:"<< endl
    << "1- Novo" << endl << "2- Usado" << endl
    << "Para sair, digite qualquer outro valor" << endl;
    cin >> tipo;

    system("cls");

    if(tipo==1){
        cout << "Percentual " << endl;
        cin >> percentual;
        cout << "Endereço: " << endl;
        cin >> endereco;
        system("cls");

        //Instancializando o objeto e inicializando o consrutor.
        Novo imovel(endereco, 100000.00);
        //Setando o valor percentual digitado pelo usuário
        imovel.setPorcentagemAdicional(percentual);
        //Imprimindo os valores após realizar as operações
        imovel.imprime();
    }

    else if(tipo==2){
        cout << "Percentual " << endl;
        cin >> percentual;
        cout << "Endereço: "<< endl;
        cin >> endereco;
        system("cls");

        Velho imovel(endereco,100000.00);//
        imovel.setPorcentacemDesconto(percentual);
        imovel.imprime();
    }

    else //Se o valor digitado não for 1 ou 2
        cout << "Entrada inválida" << endl;

    return 0;
}
