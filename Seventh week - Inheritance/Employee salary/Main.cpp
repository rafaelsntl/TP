#include <iostream>//Biblioteca de entrada e sa�da de dados
#include <locale>//Biblioteca de manipula��o de caracteres especiais
#include <iomanip>//Biblioteca para utilizar o setprecision.
#include <cstdlib>//Biblioteca para utilizar o system.

using namespace std;

#include "Pessoa.cpp"
#include "Empregado.cpp"

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    //Vari�veis que v�o ser usadas
    string nome, CPF;
    int numeroSecao;
    float salarioBase, IR;

    //Explicando o programa
    cout << "O programa receber� os dados de um empregado"
    " e calcular� o sal�rio do mesmo" << endl;

    //Pedindo os dados e armazenando eles
    cout << "Insira os seguintes dados do empregado:" << endl;
    cout << "Nome: " << endl;
    cin >> nome;
    cout << "CPF: " << endl;
    cin >> CPF;
    cout << "N�mero da se��o: " << endl;
    cin >> numeroSecao;
    cout << "Sal�rio base: " << endl;
    cin >> salarioBase;
    cout << "Imposto de renda: " << endl;
    cin >>IR;

    //Passando os dados digitados para os das classes
    Empregado empregado;
    empregado.setNome(nome);
    empregado.setCPF(CPF);
    empregado.setSecao(numeroSecao);
    empregado.setSalario(salarioBase);
    empregado.setIR(IR);

    system("cls");//Limpando
    empregado.imprimeDados();//Imprimindo tudo

    return 0;
}
