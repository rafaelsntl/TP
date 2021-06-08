#include "Empresa.h"

Empresa::Empresa(float faturamento, string nome, string CNPJ)
    : Imposto (faturamento)
{
    this -> nome = nome;
    this -> CNPJ = CNPJ;
}
//para retornar os dados armazenados pelo objeto da classe;
string Empresa::getNome()
{
    return nome;
}
string Empresa::getCNPJ()
{
    return CNPJ;
}

void Empresa::imprime()//imprime os dados para o usuário
{
    cout << getNome() << endl
         << "CNPJ " << getCNPJ() << endl
         << "Faturamento R$ " << Imposto::getFaturamento() << endl;

}
