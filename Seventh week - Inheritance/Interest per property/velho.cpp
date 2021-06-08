#include "velho.h" //Implementa��o da classe derivada

Velho::Velho(string endereco, float preco){
    this -> endereco = endereco;
    this -> preco = preco;
}

float Velho::setPorcentacemDesconto(float velhoPorcentagem){
    Velho::velhoPorcentagem = velhoPorcentagem;
}

float Velho::getPorcentacemDesconto()const{
    return (velhoPorcentagem / 100) * preco;
}

float Velho::CalculaValorVelho()const{
    return  preco - getPorcentacemDesconto();
}

void Velho::imprime()const{
    cout << fixed << setprecision(2) << endl;
    cout << "O pre�o a ser cobrado por esse im�vel, com um desconto de R$" << getPorcentacemDesconto()  <<
         "� R$" << CalculaValorVelho() << endl;
}

float Velho::velhoPorcentagem = 0;
