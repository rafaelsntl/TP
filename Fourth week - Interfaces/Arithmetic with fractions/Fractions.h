#ifndef FRACTIONS_H_INCLUDED
#define FRACTIONS_H_INCLUDED
class Fracao{ //Criando a classe "Fracao"
private: //Atributor privados
    int num;
    int den;
public: //Atributos publicos
    Fracao();//O construtor
    void setFracao(int, int); //Para setar (definir) os valores
    int getNum(); // Para retornar os valores
    int getDen();
    float Flutuante();
    void multiplica(Fracao, Fracao); //Para multiplicar
    void divide(Fracao, Fracao);//Para dividir
};
#endif // FRACTIONS_H_INCLUDED
