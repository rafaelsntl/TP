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

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    Fracao f1, f2, fr; //Objetos da classe Fracao
//Variáveis que seram ultilizadas aqui na main
    int Digitado, F1num, F1den, F2num, F2den;

//Explicando o programa e pedindo para o usuário digitar a opção que deseja
    cout << "Digite a opção de cálculo que deseja fazer!" << endl;
    cout <<"Caso seja multiplicação, digite 1. Caso seja divisão, digite 2)" << endl;
    cin >> Digitado;

//Pedindo os valores dos numeradores e denominadores e os armazenando
    cout << "Digite o valor do numerador e denominador F1" << endl;
    cin >> F1num;
    cin >> F1den;
    cout << "Digite o valor do numerador e denominador F2" << endl;
    cin >> F2num;
    cin >> F2den;

/*Testes para saber se o usuário digitou 0 em algum dos den.
Se ele tiver digitado 0, será pedido um novo valor para substituir*/
    if(F1den == 0)
    {
        cout << "Você digitou 0 para o denominador 1!"
             " Digite outro valor para substituir!" << endl;
        cin >> F1den;

    }
    else if (F2den == 0)
    {
        cout << "Você digitou 0 para o denominador 2!"
             " Digite outro valor para substituir!" << endl;
        cin >> F2den;
    }

/*Após sabermos que temos valores que podem ser calculados, vamos
atribuir todos os valores para atributos  de cada objeto da classe*/
    f1.setFracao(F1num, F1den);
    f2.setFracao(F2num, F2den);

/*Se a opção digitada pelo usuário for a de multiplicação, vamos chamar
o método multiplica e achar a fração resultante*/
    if(Digitado==1)
    {
        fr.multiplica(f1, f2);
        cout << "A multiplicação eh:" << endl;
    }

/*Se a opção digitada pelo usuário for a de divisão, vamos chamar
o método divide e achar a fração resultante*/
    else if (Digitado == 2)
    {
        fr.divide(f1, f2);
        cout << "A divisao eh:" << endl;
    }
//Mostrando todos os valores ao usuário
    cout << fixed << setprecision(4);
    cout << "Formato racional: " << fr.getNum() <<
         "/" << fr.getDen() << endl;
    cout << "Formato em ponto flutuante: " << fr.Flutuante();

    return 0;
}
