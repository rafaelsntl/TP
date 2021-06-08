//Garantindo que o arquivo nao seja inicializado varias vezes
#ifndef CIRCUITO_H_INCLUDED
//Definindo o arquivo que ta usando
#define CIRCUITO_H_INCLUDED

class LeiOhm //Prototipo da classe LeiOhm
{
//Aributos privados:
    float resistencia;
    float corrente;
public: //Aributos publicos
    //Construtor padrão:
    LeiOhm();
    //Set : Define o valor
    //Get : Retorna o valor
    void setResistencia(float);
    float getResistencia();
    void setCorrente(float);
    float getCorrente();
    //Métodos para calcular a voltagem e potencia:
    float calculaVoltagem();
    float potenciaDissipada();
};
#endif // CIRCUITO_H_INCLUDED
