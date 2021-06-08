#include <string>
// incluindo o arquivo que definimos o protótipo da classe
#include "OrdenaNome.h"

//Construtor
Nomes::Nomes(int tMax)
{
    this->tMax=tMax;
    if (tMax < 0) {
        tMax = 0;
    }

    nomes = new string[tMax]; //Botando o ponteiro no inicio da memória
    this->tAtual=0;
}

//Método para  inicializar a lista criada dinamicamente
void Nomes::setLista(string *nomes, int TMax){
    for (int j=0; j<TMax; j++)
        nomes[j]=" ";
}

//Para inserir os nomes digitados
void Nomes::adicionaNomes(string nome)
{
    if(tAtual < tMax){
    nomes[tAtual] = nome;
    tAtual = tAtual + 1;
}
}

//Para ordenar a lista
void Nomes::ordenaNomes()
{
    //Variável auxiliar para armazenar temporariamente os atributos
    string aux;
    //Variáveis que seram usadas nos comandos de repetição
    int i, j;
    //For para percorrer o vetor
    for(i=0; i<tAtual-1; i++)
    {
        //Para comparar os elementos
        for(j=0; j<tAtual-1; j++)
        {
            //Função compare() da biblioteca string para comparar os atributos
            if(nomes[j].compare(nomes[j+1]) > 0)
            {
                //Se a condição for aceita, haverá a troca dos valores.
                aux=nomes[j];
                nomes[j]=nomes[j+1];
                nomes[j+1]=aux;
            }
        }
    }
}
//Método para imprimir
void Nomes::imprime()const
{
    for(int i=0; i<tAtual; i++)
    {
        cout << "Nome[" << i+1 << "]: "
        << nomes[i] << endl;
    }
}

//Destrutor
Nomes::~Nomes()
{
    delete [] nomes;
}
