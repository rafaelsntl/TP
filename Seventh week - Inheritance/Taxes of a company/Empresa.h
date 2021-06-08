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
    void imprime(); //Função para imprimir as informações ao usuário.
};

#endif // EMPRESA_H_INCLUDED
