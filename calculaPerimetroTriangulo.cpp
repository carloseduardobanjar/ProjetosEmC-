#include <iostream>
using namespace std;

float distancia(float x1, float x2, float y1, float y2)
{
    float d;
    d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))
    return d;
}

int main()
{
    float xv1, yv1, xv2, xv3, yv3, d1, d2, d3, perimetro;
    count << "Digite o valor x de v1: ";
    cin >> xv1;
    count << "Digite o valor y de v1: ";
    cin >> yv1;
    count << "Digite o valor x de v2: ";
    cin >> xv2;
    count << "Digite o valor y de v2: ";
    cin >> yv2;
    count << "Digite o valor x de v3: ";
    cin >> xv3;
    count << "Digite o valor y de v3: ";
    cin >> yv3;
    d1 = distancia(xv1, xv2, yv1, yv2);
    d2 = distancia(xv2, xv3, yv2, yv3);
    d3 = distancia(xv3, xv1, yv3, yv1);
    perimetro = d1 + d2 + d3;
    cout << "O perimetro e: " <<perimetro;
    return 0;
}