#include<iostream>
using namespace std;

int calcula_funcionario (int qtd_fun)
{
    int cont, matr, idade, qtd_50;
    float sal;
    qtd_50=0;
    cont=0;
    while(cont<qtd_fun)
    {
    cout<<"Forneca a matricula:";
    cin>> matr;
    cout<<"Forneca a idade:";
    cin>>idade;
    cout<<"Forneca o salario:";
    cin>>sal;
    if (idade>50)
    qtd_50=qtd_50+1;
    cont=cont+1;
    }
     return qtd_50;
}
int main()
{
    int qtd, maior_50;
    cout<<"Forneca a quantidade de funcionarios:";
    cin>>qtd;
    maior_50= calcula_funcionario (qtd);
    cout<<"Funcionarios acima de 50 anos:"<<maior_50;
    return 0;
}
