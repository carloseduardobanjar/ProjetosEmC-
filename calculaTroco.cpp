#include <iostream>
using namespace std;
float periferico(int qtd_periferico)
{
    float total_p, preco_periferico;
    int cont;
    total_p=0;
    cont=0;
    while(cont<qtd_periferico)
    {
    cout<<"Insira o preco do periferico:";
    cin>>preco_periferico;
    total_p=total_p+preco_periferico;
    cont=cont+1;
    }
    return total_p;
}
int main ()
{
    int cont, codigo_modelo, sem_adicionais, qtd_p;
    float preco_modelo, p, valormedia;
    cout<<"Codigo do modelo escolhido:";
    cin>>codigo_modelo;
    somavenda=0;
    cont=0;
    sem_adicionais=0;
    while(codigo_modelo!=0)
    {
    cout<<"Preco do modelo escolhido:";
    cin>>preco_modelo;
    cout<<"Quantidade perifericos:";
    cin>>qtd_p;
    p=periferico(qtd_p);
    venda=preco_modelo+p;
    somavenda=somavenda+venda;
    if (qtd_p==0)
        sem_adicionais=sem_adicionais+1;
    cout<<"\nCodigo do modelo escolhido:";
    cin>>codigo_modelo;
    cont=cont+1;
    }
    valormedia=somavenda/cont;
    cout<<"Vendas sem perifericos adicionais:"<<sem_adicionais;
    cout<<"\nMedia vendas:"<<valormedia;
    return 0;
}
