#include "professor.h"

Professor::Professor(string nome, string email, int idade,
            int numSala, string departamento): Usuario(nome, email, idade)
{//Construtor que herda os dados da classe Usuario
    setNumSala(numSala);
    setDepartamento(departamento);
}
void Professor::setNumSala(int numSala)
{//Se o valor digitado for maior que 0, ele passa pra o da classe
    this->numSala = (numSala < 0.0 ? 0.0 : numSala);
}
void Professor::setDepartamento(string departamento)
{
    this -> departamento = departamento;
}
void Professor::imprime()
{ //imprimindo todos os dados (incluindo os da classe Usuario)
    cout << "DADOS DO PROFESSOR" << endl
        << "Nome do Usuário: " << Usuario::getNome() << endl
        << "Email: " << Usuario::getEmail() << endl
        << "Idade: " << Usuario::getIdade() << endl
        << "Departamento: " << departamento << endl
        << "Sala: " << numSala << endl;
}
