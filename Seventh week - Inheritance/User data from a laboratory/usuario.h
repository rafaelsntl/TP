#ifndef USUARIO_H
#define USUARIO_H

class Usuario// Classe base Usuario.
{
private:
    string nome;
    string email;
    int idade;
public:
    Usuario(string = "", string =" ", int = 0);//construtor que inicializa os atributos de um objeto da classe;
    string getNome();//retorna o nome armazenado pelo objeto da classe;
    int getIdade();//retorna a idade armazenada pelo objeto da classe;
    string getEmail();//retorna o email armazenado pelo objeto da classe.
};
#endif
