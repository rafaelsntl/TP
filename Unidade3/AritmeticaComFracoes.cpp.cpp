#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

class Fracao{ //Criando a classe "Fracao"
private: //Atributor privados
    int num;
    int den;
public: //Atributos publicos
    Fracao();//O construtor
    void setFracao(int, int); //Para setar (definir) os valores
    int getNum(); // Para retornar os valores
    int getDen();
    float Flutuante();
    void multiplica(Fracao, Fracao); //Para multiplicar
    void divide(Fracao, Fracao);//Para dividir
};
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

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    Fracao f1, f2, fr; //Objetos da classe Fracao
//Vari�veis que seram ultilizadas aqui na main
    int Digitado, F1num, F1den, F2num, F2den;

//Explicando o programa e pedindo para o usu�rio digitar a op��o que deseja
    cout << "Digite a op��o de c�lculo que deseja fazer!" << endl;
    cout <<"Caso seja multiplica��o, digite 1. Caso seja divis�o, digite 2)" << endl;
    cin >> Digitado;

//Pedindo os valores dos numeradores e denominadores e os armazenando
    cout << "Digite o valor do numerador e denominador F1" << endl;
    cin >> F1num;
    cin >> F1den;
    cout << "Digite o valor do numerador e denominador F2" << endl;
    cin >> F2num;
    cin >> F2den;

/*Testes para saber se o usu�rio digitou 0 em algum dos den.
Se ele tiver digitado 0, ser� pedido um novo valor para substituir*/
    if(F1den == 0)
    {
        cout << "Voc� digitou 0 para o denominador 1!"
             " Digite outro valor para substituir!" << endl;
        cin >> F1den;

    }
    else if (F2den == 0)
    {
        cout << "Voc� digitou 0 para o denominador 2!"
             " Digite outro valor para substituir!" << endl;
        cin >> F2den;
    }

/*Ap�s sabermos que temos valores que podem ser calculados, vamos
atribuir todos os valores para atributos  de cada objeto da classe*/
    f1.setFracao(F1num, F1den);
    f2.setFracao(F2num, F2den);

/*Se a op��o digitada pelo usu�rio for a de multiplica��o, vamos chamar
o m�todo multiplica e achar a fra��o resultante*/
    if(Digitado==1)
    {
        fr.multiplica(f1, f2);
        cout << "A multiplica��o eh:" << endl;
    }

/*Se a op��o digitada pelo usu�rio for a de divis�o, vamos chamar
o m�todo divide e achar a fra��o resultante*/
    else if (Digitado == 2)
    {
        fr.divide(f1, f2);
        cout << "A divisao eh:" << endl;
    }
//Mostrando todos os valores ao usu�rio
    cout << fixed << setprecision(4);
    cout << "Formato racional: " << fr.getNum() <<
         "/" << fr.getDen() << endl;
    cout << "Formato em ponto flutuante: " << fr.Flutuante();

    return 0;
}
