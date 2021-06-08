#include "usuario.h"
Usuario::Usuario(string nome, string email, int idade) //construtor que inicializa os atributos de um objeto da classe;
{
    this -> nome = nome;
    this -> email = email;
    this->idade = (idade < 0.0 ? 0.0 : idade);
}
string Usuario::getNome() //retorna o nome armazenado pelo objeto da classe;
{
    return nome;
}
int Usuario::getIdade() //retorna a idade armazenada pelo objeto da classe;
{
    return idade;
}
string Usuario::getEmail() //retorna o email armazenado pelo objeto da classe.
{
    return email;
}

