#include <iostream>
using namespace std;

void cedulas (int valor)
{
    int qt100, qt50, qt20, qt10, qt5, qt2, qt1, resto;
    qt100 = valor/100;
    resto = valor%100;
    qt50 = resto/50;
    resto = resto%50;
    qt20 = resto/20;
    resto = resto%20;
    qt10 = resto/10;
    resto = resto%10;
    qt5 = resto/5;
    resto = resto%5;
    qt2 = resto/2;
    qt1 = resto%2;

    cout << "Nota de 100: " <<qt100;
    cout << "Nota de 50: " <<qt50;
    cout << "Nota de 20: " <<qt20;
    cout << "Nota de 10: " <<qt10;
    cout << "Nota de 5: " <<qt5;
    cout << "Nota de 2: " <<qt2;
    cout << "Nota de 1: " <<qt1;
}

int main()
{
    int valor_cedulas;
    cout << "Digite o valor desejado: ";
    cin >> valor_cedulas;
    cedulas(valor_cedulas);
    return 0;
}