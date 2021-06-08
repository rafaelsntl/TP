
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

#include "poupanca.cpp"

int main()
{
    setlocale(LC_ALL, "");

    //Objetos da classe ContaDePoupanca
    ContaDePoupanca poupador1, poupador2;

    // vari�veis para guardar informa��es que o usu�rio digitar
    float saldo1, saldo2, juros;

    //Explicando o programa
    cout << "Esse programa receber� o saldo atual de duas contas e"
         " calcular� o rendimento anual delas." << endl;

    //Pedindo os valores, armazenando e passando para a classe
    cout << "Insira o valor a ser depositado do poupador 1 :" << endl;
    cin >> saldo1;
    poupador1.setSaldoDaPoupanca(saldo1);

    cout << "Insira o valor a ser depositado do poupador 2 :" << endl;
    cin >> saldo2;
    poupador2.setSaldoDaPoupanca(saldo2);

    cout << "Informe a taxa de juros (%):" << endl;
    cin >> juros;
    ContaDePoupanca::modifiqueTaxaDeJuros(juros);


    //Fixando as casas decimais
    cout << fixed << setprecision(2);

    //Mostrando os rendimentos ao usu�rio
    cout << "O rendimento do poupador 1 �: R$ " <<
         poupador1.calculeRendimentoMensal() << endl;
    cout << "O rendimento do poupador 2 �: R$  " <<
         poupador2.calculeRendimentoMensal() << endl;

    return 0;
}
