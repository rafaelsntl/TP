#ifndef VELHO_H
#define VELHO_H

class Velho : public Imovel{ //Classe Velho que herda a classe Imóvel
private:
    static float velhoPorcentagem;
public:
    Velho (string = "", float = 0);
    static float setPorcentacemDesconto (float);
    float getPorcentacemDesconto()const;
    float CalculaValorVelho()const;
    void imprime() const;
};
#endif

