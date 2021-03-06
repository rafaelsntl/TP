#include <iostream>
#include <locale>

using namespace std;

//Criando a classe:
class Retangulo
{
    //Definindo os atributos e método
    int pix, piy, psx, psy;
    bool checar(int,int,int,int);
    //Metodos públicos:
public:
    int setValores(int, int, int, int);
    int comprimento();
    int largura();
    int perimetro();
    int area();
    bool ehquadrado();
};
//Método booleano para testar se os valores que o usuário digitou estão entre 0 e 15
bool Retangulo::checar(int x1, int x2, int y1, int y2)
{
    if((x1>0 && x1<15)&& (y1>0 && y1<15) && (x2>0 && x2<15) && (y2>0 && y2<15))
        return true;
    else
        return false;
}
//Método para atribuir os valores digitados pelo usuário ou os zeros aos atributos da classe
int Retangulo::setValores(int x1, int x2, int y1, int y2)
{
//Se passar pelo teste acima (todos os valores no intervalo), os valores seram atribuidos
    if(checar(x1, y1, x2, y2))
    {
        pix = x1;
        piy = y1;
        psx = x2;
        psy = y2;
    }
//Se falar no test (um estiver fora do intervalo), zero será atrinuído a todos os valores
    else
    {
        pix = 0;
        piy = 0;
        psx = 0;
        psy = 0;
    }
}
//Método para usar calcular o comprimento e a largura:
int Retangulo::comprimento()
{
    return psx-pix;
}

int Retangulo::largura()
{
    return psy-piy;
}
//Método para usar os valores da largura e comprimento para calcular o perímetro e a área
int Retangulo::perimetro()
{
    int Largura = largura();
    int Comprimento = comprimento();
    return (2*Largura)+(2*Comprimento);
}

int Retangulo::area()
{
    int Largura=largura();
    int Comprimento=comprimento();
    return Comprimento*Largura;
}
//Método booleano para testar se é quadrado
bool Retangulo::ehquadrado()
{
    int Largura=largura();
    int Comprimento=comprimento();
    if(Largura==0 && Comprimento==0)
    {
        return false;
    }
    else
    {
        return Largura==Comprimento;
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    //Definindo o objeto da classe Retangulo com o nome de retangulo1
    Retangulo retangulo1;
    //Variáveis para guardar os valores digitados pelo usuário
    int x1, x2, y1, y2;

    //Falando o que o programa faz!
    cout << "O programa irá calcular o comprimento, a largura, o"
         "perímetro e a área" << endl;
    //Pedindo e armazenando os valores:
    cout << "Digite os valores de X1 e X2: " << endl;
    cin >> x1 >> x2;
    cout << "Digite os valores de Y1 e Y2: " << endl;
    cin >> y1 >> y2;

    //Atribuindo os valores digitados pelo usuário ao setValores
    retangulo1.setValores(x1, y1, x2, y2);

    //Mostrando os valores ao usuário:
    cout << "Comprimento: " << retangulo1.comprimento() << endl;
    cout<< "Largura: " << retangulo1.largura() << endl;
    cout << "Perímetro: " << retangulo1.perimetro() << endl;
    cout << "Área: " << retangulo1.area() << endl;

    //Mostrando que é quadrado a função ehquadrado for verdadeira
    if(retangulo1.ehquadrado())
        cout <<"É um quadrado!" << endl;

    return 0;
}
