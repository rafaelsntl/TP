#include "novo.h" //Implementa��o da classe derivada

float Novo::novoPorcentagem=0; //Inicializando o valor com 0

Novo::Novo(string endereco, float preco){//Setando os valores
    this -> endereco = endereco;
    this -> preco = preco;
}

float Novo::setPorcentagemAdicional(float novoPorcentagem){
    //Setando o valor digitado pelo usu�rio ao da classe
    Novo::novoPorcentagem=novoPorcentagem;
}

float Novo::getPorcentagemAdicional()const{
    //Met�do para retornar o valor da porcentagem
	return (novoPorcentagem / 100) * preco;
}
float Novo::CalculaValorNovo()const{
    //Para calcular o valor final com o adicional
	return getPorcentagemAdicional() + preco;
}

void Novo::imprime()const{
    //Imprimindo os valores
    cout << fixed << setprecision(2) << endl;
    cout << "O pre�o a ser cobrado por esse im�vel, com um adicional de R$" << getPorcentagemAdicional()  <<
    " � R$" << CalculaValorNovo() << endl;
}
