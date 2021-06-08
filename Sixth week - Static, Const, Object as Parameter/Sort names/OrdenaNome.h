//Garantindo que o arquivo nao seja inicializado varias vezes
#ifndef ORDENANOME_H
//Definindo o arquivo usado
#define ORDENANOME_H

#include <iostream>

using namespace std;

//Criando a classe
class Nomes{
private:
    //Definindo atributos privados
    string *nomes;
    int tMax;//tamanho máximo
    int tAtual; //tamanho atual

    //Definindo métodos públicos
public:
    Nomes(int);
    void setLista(string *, int);
    void ordenaNomes();
    void adicionaNomes(string);
    void imprime()const;
    ~Nomes();
};
#endif // ORDENANOME_H_INCLUDED
