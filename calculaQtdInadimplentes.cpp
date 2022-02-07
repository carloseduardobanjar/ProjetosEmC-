#include <iostream>
#define MAX 1000
using namespace std;

struct spc{
    int cpf;
    int meses;
};
typedef struct spc Tcadastro;

int leitura_SPC (Tcadastro v[])
{
    int i, cpf, qtd;
    i=0;
    cout<<"CPF (0 para termino):";
    cin>> cpf;
    while(cpf!=0&&i<MAX)
    {
    cout<<"Quantidade de meses inadimplente:";
    cin>> qtd;
    v[i].cpf= cpf;
    v[i].meses=qtd;
    i++;
    cout<<"CPF (0 para termino):";
    cin>> cpf;
    }
    return i;
}

int busca (Tcadastro vet[], int cpfprocurado, int qtdinadimplentes)
{
    int i;
    for (i=0; i<qtdinadimplentes; i++)
    {
        if(cpfprocurado==vet[i].cpf)
            return i;
    }
    return -1;
}

int main()
{
    Tcadastro vetor[MAX];
    int spc, cpf, buscacpf, cod, qtd, i;
    float preco, total;
    total=0;
    spc= leitura_SPC (vetor);
    for (i=0; i<50; i++)
    {
    cout<<"\nVenda - CPF:";
    cin>> cpf;
    buscacpf=busca(vetor, cpf, spc);
    if (buscacpf==-1)
    {
        cout<<"Codigo do produto (0 para termino):";
        cin>>cod;
        while (cod!=0)
        {
        cout<<"Quantidade comprada:";
        cin>>qtd;
        cout<<"Preco unitario:";
        cin>>preco;
        total+= qtd*preco;
        cout<<"Codigo do produto (0 para termino):";
        cin>>cod;
        }
        cout<<"Valor total:"<<total;
        total=0;
    }
    else
        cout<<"Venda cancelada. Cliente Inadimplente a "<<vetor[buscacpf].meses<<" meses";
    }
        return 0;
}
