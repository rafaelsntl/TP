#include "poupanca.h"

//Inicializando a taxa de juros com 0
float ContaDePoupanca::taxaDeJurosAnual = 0;

//Passando o valor digitado pelo usu�rio para o da classe
void ContaDePoupanca::setSaldoDaPoupanca(float saldoDaPoupanca){
	this -> saldoDaPoupanca = saldoDaPoupanca;
}
//M�todo para calcular o rendimento
float ContaDePoupanca::calculeRendimentoMensal(){
saldoDaPoupanca = saldoDaPoupanca + (saldoDaPoupanca*(taxaDeJurosAnual/100))/12;
return saldoDaPoupanca;
}

//M�todo para modificar a taxa de juros
float ContaDePoupanca::modifiqueTaxaDeJuros(float juros){
   taxaDeJurosAnual = juros;
}
