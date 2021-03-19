#include <iostream>
#include <cstdlib> //Para usar o "system ("cls");"
#include <locale>

using namespace std;

class Elevador //Criando a classe elevador.
{
private: //Atributos privados
    int AndarAtual;
    int Andares;
    int Capacidade;
    int TotalPessoas;

public: //Atributos p�blicos
    int entra();
    int sai ();
    int sobe(int);
    int desce(int);
    void situacao();
    //Construtores:
    Elevador ();
    Elevador (int, int);

};
//Construtor sem par�metros
Elevador::Elevador() //S� pra atribuir 0 aos valores
{
    AndarAtual = 0;
    TotalPessoas = 0;
    Capacidade = 10;
    Andares = 5;
}
//Construtor com par�metros
//para atribuir os valores que definimos no construtor padr�o
Elevador::Elevador(int Capacidade, int Andares)
{
    //"this" serve para podermos usar a mesma vari�vel
    this->Capacidade = Capacidade;
    this->Andares = Andares;
}
//M�todos para adcionar e tirar pessoas do elevador:
int Elevador::entra ()
{
//Se n�o o limite nao tiver sido excedido, uma pessoa � adicionada ao elevador
    if(Capacidade > TotalPessoas)
        return TotalPessoas+=1;
}
int Elevador::sai ()
{
//Se o elevador n�o estiver vazio, uma pessoa � retirada do elevador
    if (TotalPessoas > 0)
        return TotalPessoas-=1;
}

int Elevador::sobe(int andarDesejado)
{
//Atribuindo o andar digitado pelo usu�rio ao AndarAtual
    AndarAtual = andarDesejado;
/*Se o andar digitado for maior que 5( que � o ultimo andar)
ser� atribuido 5 ao andar atual
*/
    if (AndarAtual > Andares)
    {
        AndarAtual = 5;
        return AndarAtual;
    }
//Se n�o, o andar digitado ser� atribuido ao andar atual
    else
    {
        AndarAtual = andarDesejado;
        return AndarAtual;
    }
}

int Elevador::desce(int andarDesejado)
{
    AndarAtual = andarDesejado;
//Se o andar digitado for menor que 0, ser� atribuido 0 ao andar atual.
    if (AndarAtual < 0)
    {
        AndarAtual = 0;
        return AndarAtual;
    }
    else
    {
        return AndarAtual;
    }
}
//M�todo para mostrar a situa��o do elevador
void Elevador::situacao()
{
    cout << "ELEVADOR COM: " << TotalPessoas << endl;
    cout << "ANDAR: " << AndarAtual << endl;
}
//Fun��o apenas para mostrar a tabela
void mostraTabela ()
{
    cout << "O que deseja fazer?" << endl;
    cout << "1. entra" << endl;
    cout << "2. sai" << endl;
    cout << "3. sobe" << endl;
    cout << "4. desce" << endl;
    cout << "5. encerra o menu" << endl;
}

int main ()
{
//Para poder usar portugu�s sem problemas
    setlocale(LC_ALL, "");
//Defininfo o objeto "elevador" da classe Elevador
    Elevador elevador;

//Vari�veis que v�o ser usadas aqui
    int Digitado;
    int andarDesejado;

//Cout pra mostrar o que o programa faz
    cout << "O programa ir� simular o funcionamento de um elevador" << endl;
//Do while para que enquanto o usu�rio n�o digitar 5, o programa ficar repetindo infinitamente
    do
    {
//Chamando a fun��o pra mostrar a tabela
        mostraTabela();
//Armazenando o valor digitado
        cin >> Digitado;
//Limpando a tela
        system ("cls");
//Testando o valor que usu�rio digitou e chamando seus m�todos
        switch (Digitado)
        {
        case 1: //ENTRA
            elevador.entra();
            elevador.situacao();
            break;
        case 2: //SAI
            elevador.sai();
            elevador.situacao();
            break;
        case 3: //SOBE
            cout << "INFORME O ANDAR DESEJADO: " << endl;
            cin >> andarDesejado;
            elevador.sobe(andarDesejado);
            elevador.situacao();
            break;
        case 4:  //DESCE
            cout << "INFORME O ANDAR DESEJADO: " << endl;
            cin >> andarDesejado;
            elevador.desce(andarDesejado);
            elevador.situacao();
            break;
        }
    }
    while(Digitado!=5);

    return 0;
}

