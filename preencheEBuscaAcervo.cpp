#include <iostream>
#define MAX 20000
using namespace std;

struct obra{
    int numobra, sitobra;
};
typedef struct obra Tobra;

int busca (Tobra v[], int elemproc, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if (v[i].numobra==elemproc)
            return i;
    }
    return -1;
}


void exibe (Tobra v[], int pos)
{
    if (pos==-1)
        cout<<"Obra inexistente";
    else
        if (v[pos].sitobra==1)
            cout<<"Nao disponivel";
        else
            cout<<"Disponivel";

}

int main ()
{
    Tobra v[MAX];
    int i, numobra, elemproc, b;
    i=0;
    cout<<"Numero da obra (0 para termino):";
    cin>>numobra;
    while(numobra!=0)
    {
        v[i].numobra=numobra;
        cout<<"Situacao da obra:";
        cin>>v[i].sitobra;
        i++;
        cout<<"Numero da obra (0 para termino):";
        cin>>numobra;
    }
    cout<<"\nNumero da obra a ser pesquisada:";
    cin>>elemproc;
    while(elemproc!=0)
    {
        b=busca(v, elemproc, i);
        exibe(v, b);
        cout<<"\nNumero da obra a ser pesquisada:";
        cin>>elemproc;
    }
    return 0;
}
