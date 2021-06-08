#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

//Classe Pessoa padrão definida na questão
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
