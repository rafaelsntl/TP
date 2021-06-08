#include <iostream>
#include <locale>

using namespace std;

//Para rodar aqui no AVA, estou incluindo o arquivo .h ao invés do .cpp:
#include "Relogio.cpp"

int main()
{
    setlocale(LC_ALL, "");
    //Objetos da classe Relogio:
    Relogio relogio;
    //Variáveis que seram ultilizadas aqui na main:
    int horas, minutos, segundos;

//Explicando o programa e pedindo para o usuário digitar os valores:
    cout << "O programa irá simular a execução de\num relógio e avançar "
    "o horario três vezes!" << endl;
    cout <<"\nDigite o horario no formato hora, minuto e segundos: ";
//Armazenando os valores digitados:
    cin>>horas;
    cin>>minutos;
    cin>>segundos;

//atribuindos os valores digitados para atributos da classe
    relogio.setHora (horas, minutos, segundos);

//Chamando o método "avancaHora" três vezes para avançar o horário três vezes:
    relogio.avancaHora();
    relogio.avancaHora();
    relogio.avancaHora();

//Mostrando o horário avançado ao usuário:
    cout << "Horário avançado: " << relogio.getHora() << "h "
         << relogio.getMinutos() << "min "
         << relogio.getSegundos() << "s";

    return 0;
}
