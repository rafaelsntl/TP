//Garantindo que o arquivo nao seja inicializado varias vezes
#ifndef ORDENANOME_H
// definindo o arquivo que ta usando
#define ORDENANOME_H

#include <iostream>
using namespace std;

//Prototipo da classe Nome
class Nome
{
    //Atributos privados
    string nome;
    string cpf;
    //Atributos públicos
public:
    // construtor para inicializar os valores com 0
    Nome();
    //Para setar (definir)
    void setNome(string);
    void setCPF(string);
    //Para retornar
    string getCPF();
    string getNome();
    //Para ordenar os nomes na ordem alfabética
    void OrdenaDados(Nome[], int);
};
#endif // ORDENANOME_H_INCLUDED
