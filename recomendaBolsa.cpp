#include <iostream>
using namespace std;

float processa_tickets (int qtd_tickets)
{
    int cont;
    float ticket, valor_ticket;
    valor_ticket=0;
    cont=0;
    while(cont<qtd_tickets)
    {
        cout<<"Forneca o valor do ticket:";
        cin>>ticket;
        valor_ticket=valor_ticket+ticket;
        cont=cont+1;
    }
    return valor_ticket;
}

int main()
{
    float despesa, valor_pago, troco, pagoticket;
    int pagamento, cont, qt;
    cont=0;
    while(cont<100)
    {
        cout<<"\nValor despesa:";
        cin>>despesa;
        cout<<"Tipo de pagamento:";
        cin>>pagamento;
        if (pagamento==1||pagamento==2)
            cout<<"Nao ha troco";
        else
            if(pagamento==3)
            {
                cout<<"Valor pago:";
                cin>>valor_pago;
                if (valor_pago==despesa)
                cout<<"Nao ha troco";
                else
		{
                troco=valor_pago-despesa;
                cout<<"Troco:"<<troco;
		}
            }
            else
            {
                cout<<"Quantidade de tickets:";
                cin>>qt;
                pagoticket=processa_tickets(qt);
                if (pagoticket==despesa)
                    cout<<"Nao ha troco";
                else
                    {
                    troco=pagoticket-despesa;
                    cout<<"Troco:"<<troco;
                    }
            }
        cont=cont+1;
        }
         return 0;
}
