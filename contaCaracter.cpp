#include <iostream>
using namespace std;

int contabiliza (char caracter, string nome)
{
    int tam, qtd, cont;
    qtd=0;
    tam= nome.length();
    for(cont=0; cont<tam; cont++)
    {
        if(caracter==nome[cont])
        {
            qtd++;
        }
    }
    return qtd;
}
int main()
{
    int quantidade, cont;
    char caracter, lixo;
    string nome;
    cout<<"Caracter a ser procurado:";
    cin.get(caracter);
    cin.get(lixo);
    for(cont=0; cont<20;cont++)
    {
        cout<<"\nDigite nome:";
        getline(cin, nome);
        quantidade=contabiliza (caracter, nome);
        cout<<"\nCaracter:"<<caracter;
        cout<<"\tNome:"<<nome;
        cout<<"\tQuantidade:"<<quantidade;
    }
    return 0;
}
