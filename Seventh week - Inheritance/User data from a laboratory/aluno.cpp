#include "aluno.h"

Aluno::Aluno(string nome, string email, int idade,
             string numMatricula, string curso): Usuario(nome, email, idade)
{
    setCurso(curso); //usando o método set pra definir os valores no construtor
    setNumMatricula(numMatricula);
}
void Aluno::setNumMatricula(string numMatricula)
{
    this -> numMatricula = numMatricula;
}
void Aluno::setCurso(string curso)
{
    this -> curso = curso;
}
void Aluno::imprime()
{//imprimindo todos os dados (incluindo os da classe Usuario)
    cout << "DADOS DO ALUNO" << endl
        << "Nome do Usuário: " << Usuario::getNome() << endl
        << "Email: " << Usuario::getEmail() << endl
        << "Idade: " << Usuario::getIdade() << endl
        << "Matricula: " << numMatricula << endl
        << "Curso: " << curso << endl;
}

