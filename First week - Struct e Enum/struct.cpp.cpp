#include <iostream> //Para comandos de entrada e sa�da
#include <math.h> //Calcular potencia e raiz
#include <iomanip> //Definir a precis�o
#include <locale> //Usar palavras em Portugu�s

using namespace std;

struct Ponto//Struct para armazenar os valores inseridos pelo usu�rio.
{
    float x1;
    float y1;
    float x2;
    float y2;

};

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    //Declarando uma vari�vel
    Ponto pont;

    float distancia;

    //Explicando o que o programa faz;
    cout << "O programa ir� calcular a dist�ncia entre dois pontos." << endl;
    //Pedindo as coordenadas do primeiro ponto ao usu�rio:
    cout << "Digite as coodenadas X e Y do primeiro ponto:" << endl;
    //Coletando os valores digitados:
    cin >> pont.x1 >> pont.y1;
    //Pedindo as coordenadas do segundo ponto ao usu�rio:
    cout << "Digite as coodenadas X e Y do segundo ponto:" << endl;
    //Coletando os valores digitados:
    cin >> pont.x2 >> pont.y2;

    //Fazendo o c�lculo da dist�ncia
    distancia = sqrt((pow(pont.x2 - pont.x1, 2)) + (pow(pont.y2 - pont.y1,2)));

    //Fixando a sa�da com aproxima��o de duas casas decimais.
    cout << fixed << setprecision (2);
    //Mostrando o resultado:
    cout << "A dist�ncia  entre os pontos �: " << distancia;

    return 0;
}
