#include <iostream>
#include <iomanip>

using namespace std;

class Pessoa
{   //Definindo os métodos privados
    string nome;
    string sexo;
    int idade;
    float altura;
    float peso;
    float IMC;

public://Definindo os métodos publicos
    void setNome(string);
    void setIdade(int);
    void setAltura(float);
    void setPeso(float);
    void setSexo(string);
    float calculaIMC();
    string Situacao();
    float getIMC();
    string getNome();
    int getIdade();
    float getAltura();
    float getPeso();
    string getSexo();
};
//Métodos para atribuir valores digitados pelo usuario
//aos atributos da classe:
void Pessoa::setNome(string name)
{
    nome = name;
}
void Pessoa::setIdade(int Idade)
{
    idade = Idade;
}
void Pessoa::setAltura(float Altura)
{
    altura = Altura;
}
void Pessoa::setPeso(float Peso)
{
    peso = Peso;
}
void Pessoa::setSexo(string Sexo)
{
    sexo = Sexo;
}
//Método para cálcular o IMC
float Pessoa::calculaIMC()
{
    IMC = peso/(altura * altura);
    return IMC;
}
//Método para ver a mostrar da pessoa de acordo com o IMC
string Pessoa::Situacao()
{
    if (IMC <= 18.5)
        return "Abaixo do peso normal";
    else if (IMC <= 25)
        return "Peso normal";
    else if (IMC <= 30)
        return "Acima do peso normal.";
    else
        return "Obesidade";
}

//Métodos para retornar os valores:
string Pessoa::getNome()
{
    return nome;
}
int Pessoa::getIdade()
{
    return idade;
}
float Pessoa::getAltura()
{
    return altura;
}
float Pessoa::getPeso()
{
    return peso;
}
string Pessoa::getSexo()
{
    return sexo;
}
float Pessoa::getIMC()
{
    return IMC;
}

int main()
{
    //Definindo o objeto da classe Pessoa com o nome de pessoa1
    Pessoa pessoa1;
    //Variaveis para armazenar os valores digitados pelo usuário.
    string name, Sexo;
    int Idade;
    float Altura, Peso;
    //Explicando o que o programa faz
    cout << "O programa irá calcular o IMC de uma pessoa." << endl;
    //Pedindo e armazenando os valores digitados pelo usuário:
    cout<<"Digite o nome da pessoa: ";
    cin>>name;
    cout<<"Digite a idade da pessoa: ";
    cin>>Idade;
    cout<<"Digite a altura da pessoa: ";
    cin>>Altura;
    cout<<"Digite o peso da pessoa: ";
    cin>>Peso;
    cout<<"Digite o sexo da pessoa: ";
    cin>>Sexo;

    //Chamando os métodos para atribuir os valores digitados pelo usuário
    pessoa1.setNome(name);
    pessoa1.setIdade(Idade);
    pessoa1.setAltura(Altura);
    pessoa1.setPeso(Peso);
    pessoa1.setSexo(Sexo);

    //Chamando o método que calcula o IMC
    pessoa1.calculaIMC ();

    //Mostrando os valores ao usuário
    cout << "Nome: " << pessoa1.getNome() << endl;
    cout << "Idade: " << pessoa1.getIdade() << endl;
    cout << "Altura :"  <<  pessoa1.getAltura() << endl;
    cout << fixed << setprecision(2); //Fixando as 2 casas decimais
    cout << "Peso: " << pessoa1.getPeso() << endl;
    cout << "Sexo:" << pessoa1.getSexo() << endl;
    cout << "IMC: " <<  pessoa1.getIMC()<< endl;
    cout << "Categoria IMC: " <<pessoa1.Situacao() << endl;

    return 0;

}
