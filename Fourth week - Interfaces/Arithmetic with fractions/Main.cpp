#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Fractions.cpp"

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    Fracao f1, f2, fr; //Objetos da classe Fracao
//Vari�veis que seram ultilizadas aqui na main
    int Digitado, F1num, F1den, F2num, F2den;

//Explicando o programa e pedindo para o usu�rio digitar a op��o que deseja
    cout << "Digite a op��o de c�lculo que deseja fazer!" << endl;
    cout <<"1 - multiplica��o." << endl
    << "2- divis�o." << endl;
    cin >> Digitado;

//Pedindo os valores dos numeradores e denominadores e os armazenando
    cout << "Digite o valor do numerador e denominador F1" << endl;
    cin >> F1num;
    cin >> F1den;
    cout << "Digite o valor do numerador e denominador F2" << endl;
    cin >> F2num;
    cin >> F2den;

/*Testes para saber se o usu�rio digitou 0 em algum dos den.
Se ele tiver digitado 0, ser� pedido um novo valor para substituir*/

    while(F1den == 0)
    {
    /*Enquanto o usu�rio digitar 0 para o denominador 1 programa ficar�
    pedindo para ele digitar outro valor */
        cout << "Voc� digitou 0 para o denominador 1!"
             " Digite outro valor para substituir!" << endl;
        cin >> F1den;

    }

    while (F2den == 0)
    {
    /*Enquanto o usu�rio digitar 0 para o denominador 2 programa ficar�
    pedindo para ele digitar outro valor */
        cout << "Voc� digitou 0 para o denominador 2!"
             " Digite outro valor para substituir!" << endl;
        cin >> F2den;
    }

    /*Ap�s sabermos que temos valores que podem ser calculados, vamos
    atribuir todos os valores para atributos  de cada objeto da classe*/
    f1.setFracao(F1num, F1den);
    f2.setFracao(F2num, F2den);

    /*Se a op��o digitada pelo usu�rio for a de multiplica��o, vamos chamar
    o m�todo multiplica e achar a fra��o resultante*/
    if(Digitado==1)
    {
        fr.multiplica(f1, f2);
        cout << "A multiplica��o eh:" << endl;
    }

    /*Se a op��o digitada pelo usu�rio for a de divis�o, vamos chamar
    o m�todo divide e achar a fra��o resultante*/
    else if (Digitado == 2)
    {
        fr.divide(f1, f2);
        cout << "A divisao eh:" << endl;
    }
//Mostrando todos os valores ao usu�rio
    cout << fixed << setprecision(4);
    cout << "Formato racional: " << fr.getNum() <<
         "/" << fr.getDen() << endl;
    cout << "Formato em ponto flutuante: " << fr.Flutuante();
    return 0;
}
