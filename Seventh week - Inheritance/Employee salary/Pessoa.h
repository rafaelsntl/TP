#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

//Classe Pessoa padr�o definida na quest�o
class Pessoa {
    string nome;
    string CPF;
   public:
    Pessoa( );
    void setNome(string);
    void setCPF(string);
    void imprimeNomeCPF( ) const;
};
#endif // PESSOA_H_INCLUDED
