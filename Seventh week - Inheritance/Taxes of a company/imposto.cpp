#include "imposto.h"//Implementação da classe derivada imposto

//Setando e retornando os valores
Imposto::Imposto(float faturamento)
{//Se o valor digitado for maior que 0, ele será passado para o da classe
    this-> faturamento = (faturamento < 0.0 ? 0.0 : faturamento);
}
float Imposto::getFaturamento(){
    return faturamento;
}
float Imposto::impostoEmpresaPadrao()
{//Pra retornar o valor do imposto
    return (getFaturamento() *0.17);
}
float Imposto::impostoEmpresaPequena()
{//Pra retornar o valor do imposto com 50% de desconto
    return (impostoEmpresaPadrao()*0.5);
}
float Imposto::impostoEmpresaComSimples()
{//Pra retornar o valor do imposto com 70% de desconto
    return (impostoEmpresaPadrao()*0.3);
}
