#include <iostream>
#include <locale>

using namespace std;

//incluindo o .h ao inv�s do .cpp para rodar aqui no ava
#include "circuito.cpp"

int main (){
    setlocale (LC_ALL,"Portuguese"); //Para os couts em portug�es
    //Definindo um vetor como objeto da classe
    LeiOhm circuito[6];
    //Vari�veis que seram usadas
    float resistencia, corrente;

    //Explicando o programa
    cout << "programa para calcular a pot�ncia e a voltagem "
    "de cinco circuitos el�tricos" << endl;

    //Para percorrer todos os objetos, calculando e mostrando o que se pede
    for (int i=1; i <= 5; i ++){
    cout << endl << "Digite o valor da corrente do circuito "<< i << ":"<< endl;
    cin >> corrente;
    cout << "Digite o valor da resist�ncia  do circuito "<< i << ":"<< endl;
    cin >> resistencia;

    //Definindo os valores
    circuito[i].setResistencia(resistencia);
    circuito[i].setCorrente(corrente);

    //Mostrando ao usu�rio
    cout << i << ": " << endl <<
    "voltagem: " << circuito[i].calculaVoltagem() << endl <<
    "pot�ncia: " << circuito[i].potenciaDissipada() << endl;
    }
}
