#include <iostream>
#include <iomanip>
#include <locale>

union Temperatura //Union para armazenar os valores inseridos pelo usuário.
{
    float celsius;
    float fahrenheit;
};

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

    Temperatura temp;
    int opcao;
    float resultado;

    //Explicando o que o programa faz;
    cout << "Esse programa transforma uma temperatuda de Celsius"
    " para Fahrenheit ou Fahrenheit para Celsius!" << endl;
    //Pedindo o valor ao usuário:
    cout << "\nDeseja converter o valor de Celsius Fahrenheit "
    "(Digite 1) ou Fahrenheit para Celsius (Digite 2)? " << endl;
    //Coletando o numero digitado:
    cin >> opcao;

    //Fixando a saída com aproximação de duas casas decimais.
    cout << fixed << setprecision(2);

    //Fazendo as verificações do caracctere para saber como será a conversao:
    if (opcao == 1)
    {
        //Pedindo o valor ao usuário:
        cout << "Digite o valor em Celsius que deseja"
        " converter para Fahrenheit" << endl;
        //Coletando o valor digitado:
        cin >> temp.celsius;
        //Fazendo o cálculo de conversao:
        resultado = ((temp.celsius * 9)/5) + 32;
        cout << "Temperatura em Fahrenheit: " << resultado << endl;
    }
    else if (opcao == 2)
    {
        //Pedindo o valor ao usuário:
        cout << "Digite o valor em Fahrenheit que deseja"
        " converter para Celsius" << endl;
        //Coletando o valor digitado:
        cin >> temp.fahrenheit;
        //Fazendo o cálculo de conversao:
        resultado = ((temp.fahrenheit -32)*5)/9;
        //Mostrando o resultado
        cout << "Temperatura em Celsius: " << resultado << endl;
    }
    else
    {
        //Saída caso o usuário digite uma entrada invalida:
        cout<<"Entrada invalida!"<<endl;
    }
    return 0;
}
