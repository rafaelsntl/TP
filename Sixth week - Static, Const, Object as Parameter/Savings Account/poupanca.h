#ifndef POUPANCA_H_INCLUDED
#define POUPANCA_H_INCLUDED
class ContaDePoupanca{
	static float taxaDeJurosAnual; //Valor da taxa de juros anual
    float saldoDaPoupanca; // Valor atual
public:
    float calculeRendimentoMensal();
    static float modifiqueTaxaDeJuros(float);
    void setSaldoDaPoupanca(float);
};
#endif // POUPANCA_H_INCLUDED
