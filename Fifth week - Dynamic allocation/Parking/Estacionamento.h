//Para que o arquivo nao seja inicializado varias vezes
#ifndef ESTACIONAMENTO_H
//Definindo o arquivo a ser usando
#define ESTACIONAMENTO_H

//Incluindo a biblioteca e o namespace aqui
//para o programa rodar corretamente no ava
#include <iostream>
using namespace std;

//Incluindo o arquivo .h para poder criar o horaEntrada e horaSaida
#include "Tempo.h"

class Estacionamento {  // prototipo da classe Estacionamento
    //Metodos privador
        string placa;
        string modelo;
        Tempo horaEntrada;
        Tempo horaSaida;
    //Metodos privados
    public:
        Estacionamento(); //Construtor padrão
        //Para setar (definir)
        void setPlaca(string);
        void setModelo(string);
        //Para retornar
        string getPlaca();
        string getModelo();
        void horarioEntrada(int,int,int); //informa a hora que o veiculo entrou
        void horarioSaida(int,int,int);  //informa a hora que o veiculo saiu
        int calculaHora(); //calcula o total de horas no estacionamento (*).
        float valorEstacionamento(); //calcula o valor a ser pago em funçao da
        //quantidade de horas
        void imprimeDados(); // Imprime dados de um carro estacionado
};
#endif //ESTACIONAMENTO_H
