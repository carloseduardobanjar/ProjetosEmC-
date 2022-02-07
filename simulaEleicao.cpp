#define TOT 49
#include<iostream>
using namespace std;

void inicializa (int v[])
{
    int i;
    for (i=0; i<TOT; i++)
    {
        v[i]=0;
    }
}
void exibe (int v[])
{
    int maior, i;
    maior=0;
    for (i=0; i<TOT; i++)
    {
        if(v[i]>maior)
            maior=i;
    }
    cout<<"\nCodigo vencedor:"<<i+101;
}
int main()
{
    int vqtd[TOT], cont, voto;
    inicializa(vqtd);
    for (cont=0; cont<1000; cont ++)
    {
        cout<<"Voto:";
        cin>>voto;
        vqtd [voto-101]++;
    }
    exibe(vqtd);
    return 0;
}

