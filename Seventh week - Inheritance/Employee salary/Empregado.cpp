#include "Empregado.h" //Implementação da classe derivada

void Empregado::setSecao(int numeroSecao)
{
//Se o valor digitado for maior que 0, ele será passado para o da classe
    this->numeroSecao = (numeroSecao < 0 ? 0 : numeroSecao);
}
void Empregado::setSalario( float salarioBase)
{
    this->salarioBase = (salarioBase < 0.0 ? 0.0 : salarioBase);
}
void Empregado::setIR(float IR)
{
    this->IR = (IR < 0.0 ? 0.0 : IR);
}
float Empregado::calcularSalario() const
{
    //Calculando o salário com o o desconto do importo de renda
    return ((100-IR)/100)*salarioBase;
}

void Empregado::imprimeDados() const //Método para imprimir todos os dados
{
    cout << fixed << setprecision(2);
    Pessoa::imprimeNomeCPF(); //Herdando o imprime da classe Pessoa
    cout<<"Número da seção: "<< numeroSecao <<endl;
    cout<<"Salário: R$ "<< calcularSalario() <<endl;
}
