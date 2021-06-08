#include <iostream>//Biblioteca de entrada e saída de dados
#include <locale>//Biblioteca de manipulação de caracteres especiais
#include <iomanip>//Biblioteca para utilizar o setprecision.
#include <cstdlib>//Biblioteca para utilizar o system.

using namespace std;

#include "Pessoa.cpp"
#include "Empregado.cpp"

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    //Variáveis que vão ser usadas
    string nome, CPF;
    int numeroSecao;
    float salarioBase, IR;

    //Explicando o programa
    cout << "O programa receberá os dados de um empregado"
    " e calculará o salário do mesmo" << endl;

    //Pedindo os dados e armazenando eles
    cout << "Insira os seguintes dados do empregado:" << endl;
    cout << "Nome: " << endl;
    cin >> nome;
    cout << "CPF: " << endl;
    cin >> CPF;
    cout << "Número da seção: " << endl;
    cin >> numeroSecao;
    cout << "Salário base: " << endl;
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
