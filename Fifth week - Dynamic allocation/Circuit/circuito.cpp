#include "circuito.h"

//Inicializando tudo com 0 com o construtor
LeiOhm::LeiOhm()
{
    resistencia = 0;
    corrente = 0;
}
//Atrinuindo o valor digitado pelo usu�rio ao atributo da classe
void LeiOhm::setResistencia(float resistencia){
    this -> resistencia = resistencia;
}
//M�todo para retornar o valor
float LeiOhm::getResistencia (){
    return resistencia;
}

void LeiOhm::setCorrente(float corrente){
    this -> corrente = corrente;
}
float LeiOhm::getCorrente(){
    return corrente;
}

//Calculando a voltagem
float LeiOhm::calculaVoltagem(){
    return getCorrente() * getResistencia() ;
}
//Calculando a potencia (corrente * a fun��o membro anterior)
float LeiOhm::potenciaDissipada(){
    return  getCorrente() * calculaVoltagem();
}
