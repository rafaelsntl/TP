#include "Fractions.h" //Incluindo o arquivo .h
Fracao::Fracao () //Construtor sem parâmetros apenas para inicializar os valores
{
    num = den = 1;
}

void Fracao::setFracao(int _num, int _den)
{//Método para atribuir os valores digitados pelo usuário aos valores da classe
    num = _num;
    den = _den;
}

int Fracao::getNum()
{ //Método para mostrar o valor do numerador
    return num;
}

int Fracao::getDen()
{ //Método para mostrar o valor do denominador
    return den;
}
//Método para multiplicar os valores das frações
void Fracao::multiplica(Fracao f1, Fracao f2)
{
/*Criando variáveis _num e  _den e realizando os cálculos do num1
pelo num2 e den1 pelo den2*/
    int _num = f1.num * f2.num;
    int _den = f1.den * f2.den;
//Atribuindo os valores do cálculo aos atributos num e den;
    this->  num = _num;
    this->  den = _den;
}
void Fracao::divide(Fracao f1, Fracao f2)
{
/*Pela regra, para dividir duas frações eu multiplico
o  numerador da primeira pelo denominador da segunda
e o denominador da primeira pelo den da segunda.*/
    int _num = f1.num * f2.den;
    int _den = f1.den * f2.num;
    this->  num = _num;
    this->  den = _den;
}
//Método para retornar os valores dos atributos em formato de double
float Fracao::Flutuante()
{
    return double(getNum())/double(getDen());
}
