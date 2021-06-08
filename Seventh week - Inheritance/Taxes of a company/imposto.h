#ifndef IMPOSTO_H_INCLUDED // Classe base Imposto.
#define IMPOSTO_H_INCLUDED
class Imposto{
    float faturamento; //Atributos privados
public:
    Imposto(float=0.0);//Construtor parametrizado
    float getFaturamento();//Funções-membro de acesso aos objetos.
    float impostoEmpresaPadrao();
    float impostoEmpresaPequena();
    float impostoEmpresaComSimples();
};
#endif // IMPOSTO_H_INCLUDED
