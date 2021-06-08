#include <iostream>
#include <locale>

using namespace std;

//Para rodar aqui no AVA, estou incluindo o arquivo .h ao inv�s do .cpp:
#include "Relogio.cpp"

int main()
{
    setlocale(LC_ALL, "");
    //Objetos da classe Relogio:
    Relogio relogio;
    //Vari�veis que seram ultilizadas aqui na main:
    int horas, minutos, segundos;

//Explicando o programa e pedindo para o usu�rio digitar os valores:
    cout << "O programa ir� simular a execu��o de\num rel�gio e avan�ar "
    "o horario tr�s vezes!" << endl;
    cout <<"\nDigite o horario no formato hora, minuto e segundos: ";
//Armazenando os valores digitados:
    cin>>horas;
    cin>>minutos;
    cin>>segundos;

//atribuindos os valores digitados para atributos da classe
    relogio.setHora (horas, minutos, segundos);

//Chamando o m�todo "avancaHora" tr�s vezes para avan�ar o hor�rio tr�s vezes:
    relogio.avancaHora();
    relogio.avancaHora();
    relogio.avancaHora();

//Mostrando o hor�rio avan�ado ao usu�rio:
    cout << "Hor�rio avan�ado: " << relogio.getHora() << "h "
         << relogio.getMinutos() << "min "
         << relogio.getSegundos() << "s";

    return 0;
}
