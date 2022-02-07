#include <iostream>
using namespace std;

float calcula_media(int valor1, int valor2,)
{
    float media;
    media = (valor1 + valor2)/2;
    return media;
}

int main()
{
    int matricula;
    float p1, p2, t1, t2, media_prova, media_trabalho, media_total;
    cout << "Matricula: ";
    cin >> matricula;
    cout << "Nota da primeira prova: ";
    cin>> p1;
    cout << "Nota da segunda prova: ";
    cin>> p2;
    cout << "Nota do primeiro trabalho: ";
    cin>> t1;
    cout << "Nota do segundo trabalho: ";
    cin>>t2;
    media_prova = calcula_media(p1, p2);
    media_trabalho = calcula_media(t1, t2);
    media_total = calcula_media(media_prova, media_trabalho);
    cout << "Media das provas: "<<media_prova;
    cout << "Media dos trabalhos: "<<media_trabalho;
    cout << "Media total: " <<media_total;
    return 0;
}