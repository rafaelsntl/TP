
#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
//Classe Aluno que herda  classe base Usuario.
class Aluno : public Usuario  {
    //Atributos privados
    string numMatricula;
    string curso;
   public:
    Aluno(string = "", string = "", int = 0, string = "", string = "");//construtor
    void setNumMatricula(string);//setar os dados
    void setCurso(string);
    void imprime();//imprime todos os dados
};
#endif // ALUNO_H_INCLUDED
