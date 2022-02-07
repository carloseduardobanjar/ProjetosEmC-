#include <iostream>
using namespace std;

float vcaixa(float a, float b, float c)
{
    float volume;
    volume = a * b * c;
    return volume;
}

float vcilindro(float raio, float altura)
{
    float volume;
    volume = 3,14 * altura * pow(raio,2);
    return volume;
}

int main()
{
    cout << "Valor de a: ";
    cin >> A;
    cout << "Valor de b: ";
    cin >> B;
    cout << "Valor de h: ";
    cin >> H;
    cout << "Valor de d: ";
    cin >> D;
    volume_caixa = vcaixa(a,b,h);
    volume_cilindro = vcilindro(D/2, h)
    volume_peca = volume_caixa - volume_cilindro;
    cout << "Volume da peca: " << volume_peca;
    return 0;
}