#include "Pessoa.h"
//Construtor
Pessoa::Pessoa(){
    nome = "";
    CPF = "";
}
//Definindo o nome e cpf digitados pelo usu�rio para o da classe
void Pessoa::setNome(string nome) {
    this -> nome = nome;
}
void Pessoa::setCPF(string CPF){
    this-> CPF = CPF;
}
//M�todo para imprimir o nome e cpf
void Pessoa::imprimeNomeCPF() const
{
    cout << "Nome: " << nome <<endl;
    cout << "CPF: " << CPF <<endl;
}
