#include "Tempo.h"

Tempo::Tempo() //Construtor padrão
{
    hora=0;
    minuto=0;
    segundo=0;
}
void Tempo:: setHorario(int hora, int minuto, int segundo){
    //Atrinuindo os valores do usuário aos da classe Horario
    this -> hora = hora;
    this -> minuto = minuto;
    this -> segundo = segundo;
}
//Convertendo o horário total em segundos
int Tempo::totalSegundos(){
    return (hora * 3600) + (minuto * 60) + segundo;
 }
