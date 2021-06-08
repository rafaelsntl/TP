#ifndef IMOVEL_H
#define IMOVEL_H
class Imovel{//Classe imóvel sem mpetodos, só para inicializar os valores;
protected:
    string endereco;
    float preco;
public:
    Imovel(string = "", float = 0.0);
};
#endif
