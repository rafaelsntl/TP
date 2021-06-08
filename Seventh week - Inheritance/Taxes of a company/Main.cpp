#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>
#include <iomanip>

using namespace std;

#include "imposto.cpp"
#include "Empresa.cpp"

int main()
{
    setlocale(LC_ALL, "");

    cout << "Esse programa calcula o imposto que uma empresa vai pagar" << endl;
    string nome, CNPJ;//Declarando as variav�is.
    float faturamento;
    char op, opSimples;

    //Pedindo e armazenando os dados
    cout << "Digite o nome da empresa: " << endl;
    getline(cin, nome);
    fflush(stdin); //Limpa o buffer
    cout << "Digite o CNPJ da empresa: " << endl;
    getline(cin, CNPJ);
    fflush(stdin);
    cout << "Digite o faturamento da empresa: " << endl;
    cin >> faturamento;

    system("cls");
    fflush(stdin);
    cout << "Sua empresa � de pequeno porte? " << endl
    << "s/n" << endl;
    cin >> op;

     //Instancializando o objeto e inicializando o consrutor do objeto.
    Empresa empresa (faturamento, nome, CNPJ);
    system("cls");

    //Fixando 2 casas d�cimais em todas as sa�das.
    cout << fixed << setprecision(2);
    if (op == 's' || op == 'S'){
        cout << "A empresa est� cadastrada no SIMPLES?" << endl
        << "s/n" << endl;
        cin >> opSimples;
        if (opSimples == 's' || op == 'S'){//Se for cadastrada no SIMPLES
            empresa.imprime(); //m�todo para imprimir os dados
            cout << "O valor a ser pago em imposto �:"
            << empresa.impostoEmpresaComSimples() << endl;
            cout << "Empresa cadastrada no SIMPLES"<< endl;
        }
        else if (opSimples == 'n' || op == 'N'){
            empresa.imprime();
            cout << "Imposto � pagar "
            << empresa.impostoEmpresaPequena()<< endl;
        }
        else //Caso o usu�rio digite uma endrada inv�lida
            cout << "Op��o inv�lida!"<< endl;
    }

    else if (op == 'n' || op == 'N'){
        empresa.imprime();
        cout << "Imposto � pagar "
        << empresa.impostoEmpresaPadrao()<< endl;
    }
    else cout << "Op��o inv�lida!"<< endl;

    return 0;
}
