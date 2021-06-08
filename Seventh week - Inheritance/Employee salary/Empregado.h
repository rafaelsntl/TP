#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED

class Empregado : public Pessoa { //Classe Empregado que herda a classe Pessoa
    int numeroSecao; //Variáveis usadas
    float salarioBase;
    float IR;
public://métodos públicos da classe
    void setSecao(int);
    void setSalario(float);
    void setIR(float);
    float calcularSalario()const;
    void imprimeDados()const;
};
#endif // EMPREGADO_H_INCLUDED

