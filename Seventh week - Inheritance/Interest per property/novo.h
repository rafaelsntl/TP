#ifndef NOVO_H
#define NOVO_H
class Novo : public Imovel{ //Classe Novo que herda a classe Imóvel
    private:
        static float novoPorcentagem; //Valor fixo da porgentagem
    public:
        Novo (string = "", float = 0);
        static float setPorcentagemAdicional (float);
        float getPorcentagemAdicional()const;
        float CalculaValorNovo() const;
        void imprime()const;
};
#endif
