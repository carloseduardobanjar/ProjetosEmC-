#define TOT 11
#include <iostream>
using namespace std;

void inicializa(int v[])
{
    int i;
    for(i=0;i<TOT; i++)
    {
        v[i]=0;
    }
}
void exibe (int v[])
{
    int i;
    for(i=0; i<TOT; i++)
    {
        cout<<"\nNota "<<i<<": "<<v[i];
    }
}
int main()
{
    int vqtd[TOT], nota;
    inicializa (vqtd);
    do
    {
        cout<<"Digite nota. -1 para termino da leitura:";
        cin>>nota;
        vqtd [nota]++;
    }while (nota!=-1);
    exibe (vqtd);
    return 0;
}
