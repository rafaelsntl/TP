
#include <cmath> //Para usar o ceil
#include <iomanip>

// incluindo o arquivo que sera usado
#include "Estacionamento.h"

Estacionamento::Estacionamento(){  //Inicializa os atributos da classe
    placa=" ";
    modelo=" ";
    horaEntrada.setHorario(0, 0, 0);
    horaSaida.setHorario(0, 0, 0);
}
void Estacionamento::setPlaca(string placa){
    //Atribuindo os valores digitados pelo usuarioa ao do tributo da classe
    this -> placa = placa;
}
string Estacionamento::getPlaca(){
    //Para retornar a placa do carro
    return placa;
}

void Estacionamento::setModelo(string modelo){
    //Atribuindo os valores digitados pelo usuarioa ao do tributo da classe
    this -> modelo = modelo;
}
string Estacionamento::getModelo(){
    //Para retornar o modelo do carro
    return modelo;
}
//Para setar os valores de hora, minuto e segundo da entrada pelo metodo setHorario
void Estacionamento::horarioEntrada(int hora, int minuto, int segundo){ //informa a hora que o veículo entrou
    horaEntrada.setHorario (hora, minuto, segundo);
    }
//Para setar os valores de hora, minuto e segundo da saida pelo metodo setHorario
void Estacionamento::horarioSaida(int hora, int minuto, int segundo){  //informa a hora que o veículo saiu
    horaSaida.setHorario (hora, minuto, segundo);
}

int Estacionamento::calculaHora(){ //calcula o total de horas no estacionamento (*).
//Criando variaveis para facilitar
    int HoraEntrada = horaEntrada.totalSegundos();;
    int HoraSaida = horaSaida.totalSegundos();

    return ceil((float)(HoraSaida-HoraEntrada)/3600);
//ceil serve para arredondar o valor pra cima
//também estamos mudando o valor pra float para que a conversão seja feita corretamente
}
float Estacionamento::valorEstacionamento(){ //calcula o valor a ser pago em função da
//quantidade de horas
return 1.5 * calculaHora();
}

void Estacionamento::imprimeDados(){// Imprime dados de um carro estacionado
    cout << fixed << setprecision(2); //fixando a saida em 2 casas decimais
    cout << "Placa: " << getPlaca() << endl;
    cout << "Modelo: " << getModelo() << endl;
    cout << "Horas ocupadas: " << calculaHora() << "h" << endl;
    cout << "Valor a ser pago: " << valorEstacionamento() << "R$" << endl;
}

