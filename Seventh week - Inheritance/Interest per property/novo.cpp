#include "novo.h" //Implementação da classe derivada

float Novo::novoPorcentagem=0; //Inicializando o valor com 0

Novo::Novo(string endereco, float preco){//Setando os valores
    this -> endereco = endereco;
    this -> preco = preco;
}

float Novo::setPorcentagemAdicional(float novoPorcentagem){
    //Setando o valor digitado pelo usuário ao da classe
    Novo::novoPorcentagem=novoPorcentagem;
}

float Novo::getPorcentagemAdicional()const{
    //Metódo para retornar o valor da porcentagem
	return (novoPorcentagem / 100) * preco;
}
float Novo::CalculaValorNovo()const{
    //Para calcular o valor final com o adicional
	return getPorcentagemAdicional() + preco;
}

void Novo::imprime()const{
    //Imprimindo os valores
    cout << fixed << setprecision(2) << endl;
    cout << "O preço a ser cobrado por esse imóvel, com um adicional de R$" << getPorcentagemAdicional()  <<
    " é R$" << CalculaValorNovo() << endl;
}
