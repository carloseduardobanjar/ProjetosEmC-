#include <iostream>
#include <fstream>
#define TOT 3
using namespace std;

float le_sorteados(int v[])
{
    ifstream entrada;
    entrada.open ("f://alg//lista13//sorte.txt");
    int cont=0;
    float premio;
    while(!entrada.eof()&& cont<TOT)
    {
    entrada>>v[cont];
    cont++;
    }
    entrada.close();
    cout<<"Escreva o valor do premio:";
    cin>>premio;
    return premio;
}
int compara_cartao (int v[])
{
    int acerto=0, cont, aposta;
    for(cont=0; cont<TOT; cont++)
    {
    cout<<"Aposta de numero "<<cont<<":";
    cin>>aposta;
    if (aposta==v[cont])
        acerto++;
    }
    if(acerto==TOT)
        return 1;
    else
        return 0;
}
int main()
{
    int v[TOT], vencedor, cont, ganhadores=0, codigo, compara;
    float preco, rateado;
    preco=le_sorteados(v);
    for(cont=0; cont<3; cont++)
    {
        cout<<"Codigo identificador:";
        cin>> codigo;
        compara=compara_cartao(v);
        if(compara==1)
        {
            cout<<"Codigo vencedor:"<<codigo;
            ganhadores++;
        }
    }
    if(ganhadores!=0)
    {
        rateado=preco/ganhadores;
        cout<<"\nPremio rateado de cada ganhador:"<<rateado;
    }
    else
        cout<<"Sem vencedor. Premio acumulado.";
    return 0;
}
