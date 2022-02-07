#define MAX 10573
#include <iostream>
using namespace std;

struct cliente
{
    int conta;
    float saldo;
};
typedef struct cliente Tcliente;

void exibe(Tcliente v[], int qtd, float mdbanco)
{
    int i;
    for(i=0; i<qtd; i++)
    {
        cout<<"\nConta:"<<v[i].conta;
        cout<<"\tSaldo:"<<v[i].saldo;
        if(v[i].saldo>mdbanco)
            cout<<"\tAcima do saldo medio";
        else
            if(v[i]. saldo==mdbanco)
            cout<<"\tNa media do saldo medio";
        else
            cout<<"\tAbaixo do saldo medio";
    }
}
int main()
{
    Tcliente vcliente [MAX];
    int i, conta;
    float saldo, somasaldo, mdbanco;
    i=somasaldo=0;
    cout<<"Digite o numero da conta. 0 para encerrar:";
    cin>> conta;
    while(conta!=0&&i<MAX)
    {
        cout<<"Digite o saldo:";
        cin>>saldo;
        vcliente [i].saldo= saldo;
        vcliente [i].conta= conta;
        somasaldo+= vcliente[i].saldo;
        i++;
        cout<<"Digite o numero da conta. 0 para encerrar:";
        cin>> conta;
    }
    if (i!=0)
    {
        mdbanco= somasaldo/i;
        exibe (vcliente, i, mdbanco);
    }
    return 0;
}
