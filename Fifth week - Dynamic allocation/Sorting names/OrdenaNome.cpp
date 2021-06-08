#include <string>

//Incluindo o arquivo .h (onde est� o prot�tipo da classe)
#include "OrdenaNome.h"

// construtor padrao
Nome::Nome()
{
    nome = "";
    cpf = "";
}
//Atribuindo os nomes digitados pelo usuarioa aos do tributo da classe
void Nome::setNome(string nome)
{
    this->nome = nome;
}
//Para retornar o nome da pessoa
string Nome::getNome()
{
    return nome;
}

//Atribuindo os nomes digitados pelo usuarioa aos do tributo da classe
void Nome::setCPF (string cpf)
{
    this->cpf = cpf;
}
//Para retornar o CPF da pessoa
string Nome::getCPF()
{
    return cpf;
}

//M�todo para ordenar o vetor
void Nome::OrdenaDados(Nome pessoa[], int quantidade)
{
    //Vari�vel auxiliar para armazenar temporariamente os atributos
    Nome aux;
    //Para percorrer o vetor
    for(int i=0; i<quantidade-1; i++)
    {
        //Para comparar os atributos
        for(int j=0; j<quantidade-1; j++)
        {
            //Fun��o compare() da biblioteca string para comparar os atributos
            if((pessoa[j].getNome().compare(pessoa[j+1].getNome())) > 0)
            {
                //Se a condi��o for aceita, haver� a troca dos valores.
                aux=pessoa[j];
                pessoa[j]=pessoa[j+1];
                pessoa[j+1]=aux;
            }
        }
    }
}
