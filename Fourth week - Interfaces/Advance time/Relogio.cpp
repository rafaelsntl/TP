#include "Relogio.h" //incluindo o arquivo .h

Relogio::Relogio()
{
    //Construtor sem par�metros apenas para inicializar os valores
    horas = 0;
    minutos = 0;
    segundos = 0;
}

void Relogio::setHora(int horas, int minutos, int segundos)
{//M�todo para atribuir os valores digitados pelo usu�rio aos valores da classe
    this-> horas = horas;
    this-> minutos = minutos;
    this-> segundos = segundos;
}
//M�todos para mostrar os valores de horas, minutos e segundos
int Relogio::getHora()
{
    return horas;
}
int Relogio::getMinutos()
{
    return minutos;
}
int Relogio::getSegundos()
{
    return segundos;
}
//M�todo para avan�ar os valores da hora
void Relogio::avancaHora()
{
    //Primeiro, j� acrescentamos 1 ao valor de "segundos"
    segundos++;

    /*Se "segundos" for maior ou igual a 60, vamos diminuir 60
    do valor de "segundos" e acrescentar 1 a "minuto". */
    if(segundos>=60)
    {
        segundos-=60;
        minutos++;
    }
    /*Se "minutos" for maior ou igual a 60, vamos diminuir 60
    do valor de "minutos" e acrescentar 1 a o valor de "horas".*/
    if(minutos>=60)
    {
        minutos-=60;
        horas++;
    }
    /*Se "horas" for maior ou igual a 24, vamos diminuir
    24 do valor de "horas"*/
    if(horas>=24)
        horas-=24;
}
