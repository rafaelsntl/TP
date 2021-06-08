
#include <iostream>
#include <locale>

using namespace std;

#include "Estacionamento.cpp"
#include "Tempo.cpp"


int main(){
    //Para usar as palavras em portugues sem problemas
    setlocale(LC_ALL, "");

    //Definindo o objeto da classe como carro
    Estacionamento carro;
    //Variaveis que seram usadas
    string placa, modelo;
    int HorEntrada, MinEntrada, SegEntrada;
    int HorSaida, MinSaida, SegSaida;

    //Explicando o programa, pedindo a placa e modelo do carro e armazenando-os
    cout << "Esse programa calcula o funcionamento de um estacionamento!" << endl;
    cout << "Digite a placa e o modelo do carro" << endl;
    cin >> modelo >> placa;
    carro.setModelo(modelo);
    carro.setPlaca(placa);

    //Pedindo os horarios de entrada e saida, armazenando eles
    //e atribuindo aos metodos da classe estacionamento
    cout<<"Digite o horario de entrada e depois"
    " o de saída no formato (hora / minuto / segundo)" << endl;
    cin >> HorEntrada >> MinEntrada >> SegEntrada;
    cin >> HorSaida >> MinSaida >> SegSaida;
    carro.horarioEntrada (HorEntrada, MinEntrada, SegEntrada);
    carro.horarioSaida(HorSaida, MinSaida, SegSaida);

    //imprimindo os dados do carro estacionado
    carro.imprimeDados();

return 0;
}
