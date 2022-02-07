#include <iostream>
using namespace std;

int menu()
{
    int pessoas, numero;
    pessoas=0;
    cout<<"\nEscolha uma opcao:\n1-Horista\n2-Contratado\n3-Prestador de servico";
    cin>>numero;
    return numero;
}

float salario1 ()
{
    float valor_hora, sal;
    int qtd_horas;
    cout<<"Insira o valor da hora de trabalho:";
    cin>>valor_hora;
    cout<<"Insira a quantidade de horas trabalhadas:";
    cin>>qtd_horas;
    sal=valor_hora*qtd_horas;
    return sal;
}
float salario2()
{
    float sal;
    cout<<"Forneca o salario:";
    cin>>sal;
    return sal;
}
float salario3()
{
    int qtd_servicos, cont;
    float valor_servico, sal;
    cont=0;
    salario=0;
    cout<<"Insira a quantidade de servicos prestados:";
    cin>>qtd_servicos;
    while (cont<qtd_servicos)
    {
    cout<<"Valor servico:";
    cin>>valor_servico;
    sal=sal+valor_servico;
    cont=cont+1;
    }
    return sal;
}

int main()
{
    float sal;
    int opcao, pessoas;
    pessoas=0;
    while(pessoas<20)
    {
    opcao=menu();
    if (opcao==1)
        sal=salario1();
        else
            if(opcao==2)
            sal=salario2();
            else
                sal=salario3();
    cout<<"Salario:"<<sal;
    pessoas=pessoas+1;
    }
    return 0;
}
