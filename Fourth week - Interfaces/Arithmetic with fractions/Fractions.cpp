#include "Fractions.h" //Incluindo o arquivo .h
Fracao::Fracao () //Construtor sem par�metros apenas para inicializar os valores
{
    num = den = 1;
}

void Fracao::setFracao(int _num, int _den)
{//M�todo para atribuir os valores digitados pelo usu�rio aos valores da classe
    num = _num;
    den = _den;
}

int Fracao::getNum()
{ //M�todo para mostrar o valor do numerador
    return num;
}

int Fracao::getDen()
{ //M�todo para mostrar o valor do denominador
    return den;
}
//M�todo para multiplicar os valores das fra��es
void Fracao::multiplica(Fracao f1, Fracao f2)
{
/*Criando vari�veis _num e  _den e realizando os c�lculos do num1
pelo num2 e den1 pelo den2*/
    int _num = f1.num * f2.num;
    int _den = f1.den * f2.den;
//Atribuindo os valores do c�lculo aos atributos num e den;
    this->  num = _num;
    this->  den = _den;
}
void Fracao::divide(Fracao f1, Fracao f2)
{
/*Pela regra, para dividir duas fra��es eu multiplico
o  numerador da primeira pelo denominador da segunda
e o denominador da primeira pelo den da segunda.*/
    int _num = f1.num * f2.den;
    int _den = f1.den * f2.num;
    this->  num = _num;
    this->  den = _den;
}
//M�todo para retornar os valores dos atributos em formato de double
float Fracao::Flutuante()
{
    return double(getNum())/double(getDen());
}
