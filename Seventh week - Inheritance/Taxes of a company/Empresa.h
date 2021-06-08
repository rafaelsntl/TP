#ifndef EMPRESA_H_INCLUDED//Classe Empresa que herda  classe base Imposto.
#define EMPRESA_H_INCLUDED
class Empresa: public Imposto{
private:
    string nome;
    string CNPJ;
public:
    Empresa(float =0.0, string = "", string ="");//construtor
    string getNome();//retorna o nome
    string getCNPJ();
    void imprime(); //Fun��o para imprimir as informa��es ao usu�rio.
};

#endif // EMPRESA_H_INCLUDED
