#include "Tempo.h"

Tempo::Tempo() //Construtor padr�o
{
    hora=0;
    minuto=0;
    segundo=0;
}
void Tempo:: setHorario(int hora, int minuto, int segundo){
    //Atrinuindo os valores do usu�rio aos da classe Horario
    this -> hora = hora;
    this -> minuto = minuto;
    this -> segundo = segundo;
}
//Convertendo o hor�rio total em segundos
int Tempo::totalSegundos(){
    return (hora * 3600) + (minuto * 60) + segundo;
 }
