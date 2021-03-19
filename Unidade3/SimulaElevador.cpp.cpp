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

public: //Atributos públicos
    int entra();
    int sai ();
    int sobe(int);
    int desce(int);
    void situacao();
    //Construtores:
    Elevador ();
    Elevador (int, int);

};
//Construtor sem parâmetros
Elevador::Elevador() //Só pra atribuir 0 aos valores
{
    AndarAtual = 0;
    TotalPessoas = 0;
    Capacidade = 10;
    Andares = 5;
}
//Construtor com parâmetros
//para atribuir os valores que definimos no construtor padrão
Elevador::Elevador(int Capacidade, int Andares)
{
    //"this" serve para podermos usar a mesma variável
    this->Capacidade = Capacidade;
    this->Andares = Andares;
}
//Métodos para adcionar e tirar pessoas do elevador:
int Elevador::entra ()
{
//Se não o limite nao tiver sido excedido, uma pessoa é adicionada ao elevador
    if(Capacidade > TotalPessoas)
        return TotalPessoas+=1;
}
int Elevador::sai ()
{
//Se o elevador não estiver vazio, uma pessoa é retirada do elevador
    if (TotalPessoas > 0)
        return TotalPessoas-=1;
}

int Elevador::sobe(int andarDesejado)
{
//Atribuindo o andar digitado pelo usuário ao AndarAtual
    AndarAtual = andarDesejado;
/*Se o andar digitado for maior que 5( que é o ultimo andar)
será atribuido 5 ao andar atual
*/
    if (AndarAtual > Andares)
    {
        AndarAtual = 5;
        return AndarAtual;
    }
//Se não, o andar digitado será atribuido ao andar atual
    else
    {
        AndarAtual = andarDesejado;
        return AndarAtual;
    }
}

int Elevador::desce(int andarDesejado)
{
    AndarAtual = andarDesejado;
//Se o andar digitado for menor que 0, será atribuido 0 ao andar atual.
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
//Método para mostrar a situação do elevador
void Elevador::situacao()
{
    cout << "ELEVADOR COM: " << TotalPessoas << endl;
    cout << "ANDAR: " << AndarAtual << endl;
}
//Função apenas para mostrar a tabela
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
//Para poder usar português sem problemas
    setlocale(LC_ALL, "");
//Defininfo o objeto "elevador" da classe Elevador
    Elevador elevador;

//Variáveis que vão ser usadas aqui
    int Digitado;
    int andarDesejado;

//Cout pra mostrar o que o programa faz
    cout << "O programa irá simular o funcionamento de um elevador" << endl;
//Do while para que enquanto o usuário não digitar 5, o programa ficar repetindo infinitamente
    do
    {
//Chamando a função pra mostrar a tabela
        mostraTabela();
//Armazenando o valor digitado
        cin >> Digitado;
//Limpando a tela
        system ("cls");
//Testando o valor que usuário digitou e chamando seus métodos
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

