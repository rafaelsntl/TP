#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

using namespace std;

//Incluindo os arquivos das classes.
#include "usuario.cpp"
#include "aluno.cpp"
#include "professor.cpp"

int main(){
    setlocale(LC_ALL, "");
    int op, idade, numSala;//Declarando as variavéis.
    string nome, email, matricula, curso, departamento;

    cout << "Esse programa armazena os dados de usuarios de um labotatorio" << endl << endl;

    //Pedindo e armazenando os dados
    cout << "Digite o nome:" << endl;
    getline(cin, nome);
    fflush(stdin); //Limpa o buffer
    cout << "Digite o E-mail:" << endl;
    cin >> email;
    cout << "Digite a idade:" << endl;
    cin >> idade;
    cout << "Digite a opcao que deseja" << endl
    << "1- Aluno" << endl << "2- Professor" << endl
    << "Para sair, digite qualquer outro valor" << endl;
    cin >> op;

    //Se a opção digitada for 1 ele pede os outros dados do aluno
    if (op == 1){
    cout << "Digite a matricula:" << endl;
    cin >> matricula;
    fflush(stdin);
    cout << "Digite o curso:" << endl;
    getline(cin, curso);
    //Instancializando o objeto e inicializando o consrutor do objeto.
    Aluno aluno (nome, email, idade, matricula, curso);
    system("cls");
    aluno.imprime();//Imprimindo os dados do aluno
    }

    //Se a opção digitada for 1 ele pede os outros dados do professor
    else if (op == 2){
    fflush(stdin);
    cout << "Digite o departamento:" << endl;
    getline(cin, departamento);
    cout << "Digite o numero da sala:" << endl;
    cin >> numSala;

    //Instancializando o objeto e inicializando o consrutor do objeto.
    Professor professor(nome, email, idade, numSala, departamento);
    system("cls");
    professor.imprime();
    }

    else
        cout << "Opcao invalida! Voce saiu do programa!" << endl;

   return 0;
}
