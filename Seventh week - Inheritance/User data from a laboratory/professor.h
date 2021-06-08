#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
//Classe Professor que herda  classe base Usuario.
class Professor : public Usuario {
    int numSala; //Atributos privados
    string departamento;
   public:
    Professor(string = "", string = "", int = 0, int = 0, string = ""); //construtor
    void setNumSala(int); //setar os valores
    void setDepartamento(string);
    void imprime(); //imprime todos os dados
};
#endif // PROFESSOR_H_INCLUDED
