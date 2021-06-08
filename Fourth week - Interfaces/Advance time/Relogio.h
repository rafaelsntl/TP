#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

class Relogio//Criando a classe "Relogio"
{
private://Atributos privados
    int horas;
    int minutos;
    int segundos;

public://Atributos publicos
    //O construtor
    Relogio();
    //Para setar (definir) os valores
    void setHora (int, int, int);
    // Para retornar os valores:
    int getSegundos();
    int getMinutos();
    int getHora();
    //Método para avançar os segundos
    void avancaHora();
};

#endif // RELOGIO_H_INCLUDED
