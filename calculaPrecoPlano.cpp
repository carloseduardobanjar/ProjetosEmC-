#define MAX  20
#include <iostream>
using namespace std;

struct plano{
    int codigo;
    float valor;
    int minutoslivres;
    float minexcedente;
};
typedef struct plano Tplano;

int le (Tplano v[])
{
    int codigo, qtdlivre, cod, i;
    float valor, minexcedente;
    i=0;
    cout<<"Codigo do plano (0 para encerrar):";
    cin>> codigo;
    while(cod!=0&&i<MAX)
    {
    cout<<"Valor assinatura:";
    cin>> valor;
    cout<<"Quantidade de minutos livres:";
    cin>>qtdlivre;
    cout<<"Valor minuto excedente:";
    cin>>minexcedente;
    v[i].codigo= codigo;
    v[i].valor= valor;
    v[i].minutoslivres= qtdlivre;
    v[i].minexcedente= minexcedente;
    i++;
    cout<<"Codigo do plano (0 para encerrar):";
    cin>> codigo;
    }
    return i;
}
void exibe(int qtdplanos, Tplano v[], int mindesejados)
{
    int total, i;
    for(i=0; i<qtdplanos; i++)
    {
        cout<<"\nCodigo do plano:"<<v[i].codigo;
        cout<<"\tValor do plano:"<<v[i].valor;
        cout<<"\tMinutos livres:"<<v[i].minutoslivres;
        cout<<"\tValor minuto excedente:"<<v[i].minexcedente;
        total= v[i].valor + ((mindesejados-v[i].minutoslivres)*v[i].minexcedente);
        cout<<"\tTotal a pagar:"<<total;
    }
}

int main()
{
    Tplano vetor[MAX];
    int ledados, qtd;
    ledados= le (vetor);
    cout<<"\nQuantidade de minutos desejada (0 para encerrar):";
    cin>>qtd;
    while(qtd!=0)
    {
    exibe (ledados, vetor, qtd);
    cout<<"\nQuantidade de minutos desejada (0 para encerrar):";
    cin>>qtd;
    }
    return 0;
}
